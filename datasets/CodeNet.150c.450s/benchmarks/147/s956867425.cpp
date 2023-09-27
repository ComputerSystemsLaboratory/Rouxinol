#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define INF 1000000001
//0=48,A=65,a=97

int main() {
    int n;
    cin >> n;
    vector<int> ans(n);
    int m=sqrt(n);
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < m; j++) {
            for(int k = 1; k < m; k++) {
                if(i*i+j*j+k*k+i*j+j*k+k*i<=n){
                    ans[i*i+j*j+k*k+i*j+j*k+k*i-1]++;                      
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}