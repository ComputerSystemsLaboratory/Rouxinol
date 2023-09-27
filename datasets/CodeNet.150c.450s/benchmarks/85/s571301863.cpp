#include <iostream>
#include<climits>
#include<vector>
using namespace std;
 
int MCM(int p[],int n) {
    vector<vector<int> > m(n+1,vector<int>(n+1));
    for (int i = 0; i <= n; i++)
        m[i][i] = 0;
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j-1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (m[i][j] > q) {
                    m[i][j] = q;
                }
 
            }
        }
 
    }
    return m[1][n];
}
 
int main() {
    int n, p[200];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> p[i + 1];
    }
    cout << MCM(p, n) << endl;
    return 0;
}