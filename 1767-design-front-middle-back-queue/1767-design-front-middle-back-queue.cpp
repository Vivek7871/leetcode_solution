#include <deque>
using namespace std;

class FrontMiddleBackQueue {
private:
    deque<int> left, right;

    // Balance sizes of left and right
    void balance() {
        if (left.size() > right.size() + 1) {
            right.push_front(left.back());
            left.pop_back();
        } else if (right.size() > left.size()) {
            left.push_back(right.front());
            right.pop_front();
        }
    }

public:
    FrontMiddleBackQueue() {}

    void pushFront(int val) {
        left.push_front(val);
        balance();
    }

    void pushMiddle(int val) {
        if (left.size() > right.size()) {
            right.push_front(left.back());
            left.pop_back();
        }
        left.push_back(val);
        balance();
    }

    void pushBack(int val) {
        right.push_back(val);
        balance();
    }

    int popFront() {
        if (left.empty() && right.empty()) return -1;
        int val = left.front();
        left.pop_front();
        balance();
        return val;
    }

    int popMiddle() {
        if (left.empty() && right.empty()) return -1;
        int val = left.back();
        left.pop_back();
        balance();
        return val;
    }

    int popBack() {
        if (left.empty() && right.empty()) return -1;
        int val;
        if (!right.empty()) {
            val = right.back();
            right.pop_back();
        } else {
            val = left.back();
            left.pop_back();
        }
        balance();
        return val;
    }
};
