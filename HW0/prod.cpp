#include <iostream> //import
using namespace std; //brings in a lot of code

// ./prod 10 5
// 10 * 5 = 50

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cout << "prod requires 2 arguments" << endl;
        return 1;
    }
    cout << "./prod" << " " << argv[1] << " " << argv[2] << endl;
    cout << argv[1]<< " * " << argv[2] <<" = " << atof(argv[1]) * atof(argv[2]) << endl;
    return 0;
}   

