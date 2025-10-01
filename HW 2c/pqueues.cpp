#include <iostream>
#include <string>
#include <queue>
using namespace std;

void op(priority_queue<string> &pq) {
    string input, name, input_priority;
    int priority;


    cout << "What do you want to do? ";
    
    getline(cin, input);

    if (input == "add") {
        cout << "Name: ";
        getline(cin, name);

        cout << "Priority: ";
        cin >> priority;
        cin.ignore();

        if (priority < 10) {
            input_priority = "0" + to_string(priority) + " - " + name;
        }
        
        else {
            input_priority = to_string(priority) + " - " + name;
        }
        pq.push(input_priority);  
    }

    else if (input == "take") {
        if (!pq.empty()) {
            cout << pq.top() << endl;

            pq.pop();
        }

        else {
            cout << "There are no more people in line" << endl;
        }
    }

    else if (input == "") {
        return;
    }

    else {
        cout << input << "isn't a valid operation" << endl;
    }

    op(pq);
}

int main(int argc, char const* argv[]) {
    // Write your code here
    priority_queue<string> pq;

    op(pq);

    return 0;
}
