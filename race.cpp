#include <iostream> //import
#include <string>
#include <fstream>
#include <vector>
using namespace std; //brings in a lot of code

int main() {
    vector<string> words;
    string o = "vector";

    words = {"hello", "world", "this", "is", "a", "test"};
    words.insert(words.begin(), o);

    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}