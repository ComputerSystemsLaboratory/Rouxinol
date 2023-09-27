#include <iostream>
#include <algorithm>
#include <climits>
#define INF INT_MAX

using namespace std;

int main(){
    int n;
    cin >> n;
    int m[n+1][n+1], p[n+1];
    for(int i = 1; i <= n; i++) cin >> p[i-1] >> p[i];

    for(int i = 1; i <= n; i++) m[i][i] = 0;
    for(int l = 2; l <= n; l++){
        for(int i = 1; i <= n-l+1; i++){
            int j = i + l - 1;
            m[i][j] = INF;
            for(int k = i; k < j; k++){
                int q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                m[i][j] = min(m[i][j], q);
            }
        }
    }

    cout << m[1][n] << endl;

    return 0;
}
