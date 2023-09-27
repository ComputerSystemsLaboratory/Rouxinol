#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void printVector_2(vector<vector<int> > v) {
    // cout << "####  A  ####" << endl;
    for (int i = 0; i < v.size(); i++ ) {
        for (int j = 0; j < v.front().size(); j++) {
            cout << v[i][j] << " "; 
        }
        cout << endl;
    }
}

void printVector_1(vector<int> v) {
    // cout << "####  B  ####" << endl;
    for (int i = 0; i < v.size(); i++ ) {
        cout << v[i] << endl;
    }
}

int main(void) {
    int n; // row 
    int m; // column
    cin >> n >> m;
    // cout << n << m << endl;
    vector<vector<int> > a(n, vector<int>(m, 0));
    vector<int> b(m, 0);
    vector<int> answer(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    // printVector_2(a);
    // printVector_1(b);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            answer[i] += a[i][j] * b[j];
        }
    }

    printVector_1(answer);

    return 0;
}