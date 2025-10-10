#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>
#include "Grid.h"

using namespace std;

vector<vector<int>> p;
Grid g;



bool findPath(Grid g, int x, int y, int z, vector<vector<int>>& p) {
    p.push_back({x, y, z});


    if (x < 0 || y < 0 || z < 0 || y+1 > g.width() || x+1 > g.height() || z+1 > g.depth() || g.at(x, y, z) == 0 || g.at(x, y, z) == 2) {
        p.pop_back();
        return false;
    }


    if (g.width()-1 == y && g.height()-1 == x && g.depth()-1 == z) {
        cout << "SOLUTION" << endl;
        return true;
    }

    g.at(x, y, z) = 2;

    if(findPath(g, x+1, y, z, p) || findPath(g, x, y+1, z, p) || findPath(g, x, y, z+1, p) || findPath(g, x-1, y, z, p) || findPath(g, x, y-1, z, p) || findPath(g, x, y, z-1, p)) {
        return true;
    }
    else {
        p.pop_back();
        return false;
    }

}

int main(int argc, char* argv[]) {
    // Write your code here
    int x=0, y=0, z=0;

    fstream file (argv[1]);

    file >> g;

    if(!findPath(g, x, y, z, p)) {
        cout << "NO SOLUTION" << endl;
    }

    auto it = p.begin();

    while (it != p.end()) {
        cout << (*it)[0] << " " << (*it)[1] << " " << (*it)[2] << endl;
        
        ++it;
    }

    return 0;
}
