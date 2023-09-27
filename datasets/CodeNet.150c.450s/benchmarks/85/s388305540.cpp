#include <iostream>
#include <algorithm>
using namespace std;

static const int N = 100;

int main(){
    int n, p[N+1], m[N+1][N+1];
    cin >> n;
    for(int i=0;i<n;i++) cin >> p[i] >> p[i+1];
    for(int l=1;l<=n;l++) {
        for(int i=0;i<=n-l;i++) {
            int j = i + l;
            if(l==1) m[i][j] = 0;
            else if(l==2) m[i][j] = p[i]*p[i+1]*p[j];
            else {
                m[i][j] = 1000000000;
                for(int k=1;k<l;k++) {
                    m[i][j] = min(m[i][j], m[i][i+k] + m[i+k][j] + p[i]*p[i+k]*p[j]);
                }
            }
        }
    }
    //cout << m[4][6] << endl;
    cout << m[0][n] << endl;
    
    return 0;
}
