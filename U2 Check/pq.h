#include <cstddef>
#include <vector>
#include <iterator>
using namespace std;

template <class T>
class PQ {

    void comparator(vector<T>& data, T const& item) {
        auto it = data.begin();

        while (it != data.end() && *it > item) {
            it++;
        }
        data.insert(it, item);
    }

    public:
    vector<T> data;

    void push(T const& item) {
        comparator(data, item);
    }

    void pop() {
        data.erase(data.begin());
    }

    size_t size() const {
        return data.size();
    }

    T top() const {
        return data[0];
    }

    bool empty() const {
        return data.empty();
    }

};
