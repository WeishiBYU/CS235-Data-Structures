#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <set>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <algorithm> 
#include <cctype> 

using namespace std; 
bool findKey(unordered_map<string, set<string>>& m, string key) {
    if (m.find(key) != m.end()) {
        return true;
    }
    return false;
    }
        
void mapMaker(unordered_map<string, set<string>>& m, string curr, string prev) {
    if (!findKey(m, prev)) {
        m[prev] = set<string>();

        m[prev].insert(curr);
    }
    else {
        m[prev].insert(curr);
    }
}

// string removePunctuation(string &word) {    
//     word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());

//     return word;
// }

string getRandomFromSet(const set<string>& s) {
    int randomIndex = rand() % s.size();
    auto it = s.begin();

    advance(it, randomIndex);

    return *it;
}

int main(int argc, char const* argv[]) {
    string inFile, line, curr, prev, key, action;
    unordered_map<string, set<string>> m;
    stringstream ss;
    int count;

    inFile = argv[1];
    count = stoi(argv[2]);

    srand(time(0));

    ifstream file(inFile);

    if (!file.is_open()) {
        cout << "Could not open file" << endl;

        return 1;
    }

    ss << file.rdbuf();

    while (ss >> curr) {

        // curr = removePunctuation(curr);

        mapMaker(m, curr, prev);

        prev = curr;
    }

    for (int i = 0; i < count; i++) {
        string result = getRandomFromSet(m[key]);

        cout << result << " ";

        key = result;
    }
    return 0;
}