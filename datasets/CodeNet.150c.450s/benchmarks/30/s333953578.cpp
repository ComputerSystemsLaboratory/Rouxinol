#include <iostream>
#include <vector>
using namespace std;

void disp(vector<int>& v) {
    for (int i=0; i<v.size()-1; i++) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}

int main() {
    int i, j, minj, n, tmp;
    int swap_count = 0;
    vector<int> v;

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    for (i=0; i<n; i++) {
        minj = i;
        for (j=i; j<n; j++) {
            if (v[j] < v[minj]) {
                minj = j;
            }
        }
        if (i != minj) {
            swap(v[i], v[minj]);
            swap_count++;
        }
    }

    disp(v);
    cout << swap_count << endl;
}