#include <iostream>
#include <vector>

using namespace std;

namespace util {
    vector<int> read_int_vector() {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++) {
            int in;
            cin >> in;
            v.push_back(in);
        }
        return v;
    }
    void print_vector(vector<int> &v) {
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it;
            if (it + 1 != v.end())
                cout << " ";
        }
        cout << endl;
    }
    void swap(vector<int>& v, size_t i, size_t j) {
        int tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
    }
}

namespace {
    int run_bubble_sort(vector<int>& v) {
        int count = 0;
        for (size_t i = 0; i < v.size(); i++) {
            for (size_t j = v.size() - 1; j > i; j--) {
                if (v[j] < v[j-1]) {
                    count++;
                    util::swap(v,j,j-1);
                }
            }
        }
        return count;
    }
}

int main() {
    vector<int> in = util::read_int_vector();
    int count = run_bubble_sort(in);
    util::print_vector(in);
    cout << count << endl;
    return 0;
}