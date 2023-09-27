#include<vector>

class SlidingSum {
    int size;
    std::vector<int> node;
public:
    SlidingSum(int s) :size(s), node(std::vector<int>(s + 1, 0)) {}
    int sum(int index) const {
        int result = 0;
        for(int i = index + 1; i > 0; i -= i & -i) result += node[i];
        return result;
    }
    int sum(int left, int right) const {
        return sum(right) - sum(left - 1);
    }
    void update(int index, int value) {
        for(int i = index + 1; i <= size; i += i & -i) node[i] += value;
    }
};

#include<iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    SlidingSum ss(n);
    while(--q >= 0) {
        int com, x, y;
        cin >> com >> x >> y;
        if(com == 0) {
            ss.update(x - 1, y);
        } else {
            cout << ss.sum(x - 1, y - 1) << endl;
        }
    }
}