#include <iostream>
#include <string>
#include <vector>
#include <fstream> 
using namespace std;

bool isNumber(const string& s) {
    try {
        stoi(s);
    } catch (const std::exception&) {
        return false;
    }
    return true;
}


void getL(int n, vector<string>& lines) {
    string line;

    for (int i = 0; i < n; ++i) {
        line.clear();

        getline(cin, line);
        

        lines.push_back(line);
    }
}

void getF(int n, vector<string>& lines, ifstream& inputFile) {
    string line;

    if (!inputFile) 
    {
        cerr << "ERROR: can't open file_that_does_not_exist.txt" << endl;
        exit(1);
    }

    int i = 0;

    while (getline(inputFile, line) && i < n) {       
        lines.push_back(line);

        line.clear();

        i++;
    }
    inputFile.close();
}


void sort(vector<string>& lines) {
    int n = lines.size();

    for (int i = 0; i < n - 1; ++i) {

        for (int j = 0; j < n - i - 1; ++j) {

            if (isNumber(lines[j]) && isNumber(lines[j + 1])) {

                if (stoi(lines[j]) > stoi(lines[j + 1])) {

                    swap(lines[j], lines[j + 1]);

                }

            }

            else if (lines[j] > lines[j + 1]) {

                swap(lines[j], lines[j + 1]);

            }
        }
    }

}

int main(int argc, char const* argv[]) {
    string inputFile;
    int n = 10;
    vector<string> lines;


    if (argc == 3) {
        inputFile = argv[2];

        n = stoi(argv[1]);
        n = abs(n);

        ifstream file(inputFile);

        getF(n, lines, file);
    }

    else if (argc == 2) {
        if (isNumber(argv[1])) {

            n = stoi(argv[1]);
            n = abs(n);

            getL(n, lines);

        } else {
            inputFile = argv[1];

            ifstream file(inputFile);

            getF(n, lines, file);
        }
    }
    
    else {
        getL(n, lines);
    }

    sort(lines);

    for (const string& line : lines) {
        cout << line << endl;
    }

    return 0;
}
