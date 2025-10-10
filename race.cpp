#include <iostream> //import
#include <string>
#include <fstream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std; //brings in a lot of code

void writePermutationsRec(string soFar, set<char> remainingChars) {
    if (remainingChars.size() == 0) {
        cout << soFar << endl;

        return;
    }

    for (char c : remainingChars) {
        string next = soFar + c;
        set<char> nextRemaining = remainingChars;

        nextRemaining.erase(c);

        writePermutationsRec(next, nextRemaining);
    }
}

void writePermutations(string str) {
    string soFar = "";
    set<char> remainingChar;

    for (int i=0; i < str.length(); i++) {
        remainingChar.insert(str[i]);
    }

    writePermutationsRec(soFar, remainingChar);
}



string theCharacter(string input) {
    input = "abcde";
    return input;
}


int main() {
    string input = "abcde";

    writePermutations(input);

    return 0;
}