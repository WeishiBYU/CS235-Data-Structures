#include <iostream> //import
using namespace std; //brings in a lot of code

// ./prod 10 5
// 10 * 5 = 50

int main(int argc, char *argv[]) {
    cout << "argc = " <<argc << endl;
    cout << "argv[0]: " << argv[0] << endl;
    cout << "argv[1]: " << argv[1] * argv[2] << endl;
    return 0;
}
