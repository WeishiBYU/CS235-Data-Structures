#include <cstdlib>  // atof
#include <iostream>

using namespace std;
using std::abs;  

const double EPSILON = 0.0001;

int main(int argc, char *argv[]) {
    double lower, upper, mid, target, sq;

    target = stod(argv[1]);
    lower = 0.0;
    upper = target;

    if (upper < 0) {
        cout << "Input must be greater than 0" << endl;
        return 1;
    }
    while (abs(mid * mid - target) > EPSILON) {

        mid = (lower + upper) / 2.0;
        sq = mid * mid;
        cout << mid << " (" << sq << ")" << endl;
        
        if (sq < target) {
            lower = mid;
        } else {
            upper = mid;
        }
    }

    return 0;
}