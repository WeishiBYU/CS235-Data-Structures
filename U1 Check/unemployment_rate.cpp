#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

bool is_info(string& a, string& b) {
    if (a == b) {
        return true;
    }
    return false;
}


float dataset_to_vector(string year, string state, ifstream& file, vector<string>& words, int &num_data) {
    string line;
    float total;


    while (getline(file, line)) {
        words.clear();

        stringstream ss(line);
        string word;

        while (ss >> word) {
            if (word != "") {

                words.push_back(word);
            }
        }

        if (is_info(words[0], state) && is_info(words[1], year)) {
            float unemployed = stof(words[3]);
            total = unemployed + total;
            num_data++;
        }

    }
    return total / num_data;

}


int main(int argc, char* argv[]) {

    int num_data = 0;
    ifstream file(argv[1]);
    vector<string> words;
    string state = argv[2];
    string year = argv[3];

    if (!file.is_open()) {
        cerr << "ERROR: could not open file" << endl;
        return 0;
    }

    cout << dataset_to_vector(year, state, file, words, num_data) << endl;

    return 0;
}