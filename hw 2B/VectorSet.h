#pragma once
#include <cstdlib>
#include <vector>

using namespace std;

template<class T>
class VectorSet {
public:
    bool contains(T item) const {
        // implement contains here
        auto it = data.begin();
        
        for (it = data.begin(); it != data.end(); it++) {
            if (*it == item) {
                break;
            }
        }

        if (it != data.end()) {
            return true;
        }

        else {
            return false;
        }
        // return true if item is in the set and false if not
    }

    bool insert(T item) {
        // implement insert here
        if (contains(item)) {
            return false;
        }

        else {
            data.push_back(item);
            return true;
        }
        // set
    }

    bool remove(T item) {
        // implement remove here
        auto it = data.begin();
    
        for (it = data.begin(); it != data.end(); it++) {
            if (*it == item) {
                data.erase(it);

                return true;
            }
        }
        return false;
    }

    size_t size() const {
        // implement size here
        if (data.empty()) {
            return 0;
        }

        else {
            return data.size(); // return the number of items in the set
        }
        
    }

    bool empty() const {
        // implement empty here
        if (data.empty()) {
            return true;
        }

        else {
            return false;
        }
        // return true if the set is empty and return false otherwise
    }

    void clear() {
        // implement clear here
        data.clear();
        // remove all items from the set
    
    }

    private:
    std::vector<T> data;
};

