#include <iostream>
#include <string>
#include <set>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char const* argv[]) {
    // Write your code here
    set<string> uniqueStrings;
    string line = "1";
    vector<string> outputLines;

    if (argc == 2) {
        ifstream inputFile(argv[1]);
        
        while(getline(inputFile, line)) {
            if (!uniqueStrings.count(line)) {
                
                uniqueStrings.insert(line);
                outputLines.push_back(line);
            }
        }

    }

    else {

        while (getline(cin, line) && line != "") {

            if (!uniqueStrings.count(line)) {

                uniqueStrings.insert(line);
                outputLines.push_back(line);
            }
        }
    }

    for (int i = 0; i < outputLines.size(); i++) {
        cout << outputLines[i] << endl;
    }

    return 0;
}
