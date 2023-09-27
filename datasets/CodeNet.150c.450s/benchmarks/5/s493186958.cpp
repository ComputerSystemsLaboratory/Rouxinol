#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << v[i];
        if (i != 0) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}