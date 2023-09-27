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
    int run_selection_sort(vector<int>& v) {
        int count = 0;
        for (size_t i = 0; i < v.size(); i++) {
            size_t min = i;
            for (size_t j = i; j < v.size(); j++) {
                if (v[j] < v[min])
                    min = j;
            }

            if (min != i) {
                count++;
                util::swap(v,i,min);
            }
        }
        return count;
    }
}

int main() {
    vector<int> in = util::read_int_vector();
    int count = run_selection_sort(in);
    util::print_vector(in);
    cout << count << endl;
    return 0;
}