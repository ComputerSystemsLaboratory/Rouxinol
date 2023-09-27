#include<bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;
    int n = A.length(), m = B.length();
    int d[n + 1][m + 1];
    for(int i = 0; i < n + 1; i++)
        d[i][0] = i;
    for(int i = 0; i < m + 1; i++)
        d[0][i] = i;
    for(int i = 1; i < n + 1; i++)
        for(int j = 1; j < m + 1; j++){
            d[i][j] = min({d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (int)(A[i - 1] != B[j - 1])});
        }
    cout << d[n][m] << endl;
    return 0;
}
