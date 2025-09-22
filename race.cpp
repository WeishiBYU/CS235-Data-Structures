#include <iostream> //import
#include <string>
#include <fstream>

using namespace std; //brings in a lot of code

int main() {
    string joke;
    cout << "Joke?" << endl;
    getline(cin, joke);
    ofstream output("dadjoke.txt", ios::app);
    output << joke << endl;
    output.close();






    return 0;
}