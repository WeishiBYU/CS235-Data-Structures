#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int start, end, divisor;
    if (argc == 4) {

        start = atoi(argv[1]);
        end = atoi(argv[2]);
        divisor = atoi(argv[3]);

        if (atoi(argv[1]) < atoi(argv[2])) {
            for (int i = start; i <= end; ++i) {
            if (i % divisor == 0) {
                cout << i <<endl;
                }
            }
        }

        else {
            for (int i = start; i >= end; --i) {
            if (i % divisor == 0) {
                cout << i <<endl;
                }
            }
        }

    }
    
    return 0;
    }