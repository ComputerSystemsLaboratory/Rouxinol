#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void printVector(vector<vector<long> > v) {
    for (long i = 0; i < v.size(); i++ ) {
        for (long j = 0; j < v.front().size(); j++) {
            cout << v[i][j]; 
            if (j != v.front().size() - 1) {
            cout << " "; 
            }
        }
        cout << endl;
    }
}


int main(void) {
    long n; // row in A
    long m; // column in A and column in B
    long l; // column in B
    cin >> n >> m >> l;
    vector<vector<long> > a(n, vector<long>(m, 0));
    vector<vector<long> > b(m, vector<long>(l, 0));
    vector<vector<long> > answer(n, vector<long>(l, 0));
    for (long i = 0; i < n; i++) {
        for (long j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (long i = 0; i < m; i++) {
        for (long j = 0; j < l; j++) {
            cin >> b[i][j];
        }
    }

    //printVector(a);
    //printVector(b);

    for (long i = 0; i < n; i++) {
        for (long j = 0; j < l; j++) {
            for (long k = 0; k < m; k++) {
                answer[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printVector(answer);

    return 0;
}