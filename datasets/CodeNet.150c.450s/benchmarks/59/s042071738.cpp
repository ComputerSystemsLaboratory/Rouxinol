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
}

namespace {
    void run_insertion_sort(vector<int>& v) {
        for (int i = 1; i < v.size(); i++) {
            util::print_vector(v);
            int key = v[i];
            int j = i - 1;
            while(j >= 0 && v[j] > key) {
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = key;
        }
    }
}

int main() {
    vector<int> in = util::read_int_vector();
    run_insertion_sort(in);
    util::print_vector(in);
    return 0;
}