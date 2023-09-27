#include <bits/stdc++.h>
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;

int main(void){
    int i,j,q;
    string x,y;
    vector<vector<int> > lcs;
    cin >> q;
    while(q--){
        cin >> x >> y;
        int M = x.size();
        int N = y.size();
        lcs.resize(M+1);
        rep(i,M+1){
            lcs[i].resize(N+1);
        }
        rep(i,M){
            rep(j,N){
                if(x[i] == y[j])
                    lcs[i+1][j+1] = lcs[i][j]+1;
                else
                    lcs[i+1][j+1] = max(lcs[i+1][j],lcs[i][j+1]);
            }
        }
        cout << lcs[M][N] << endl;
    }
    return 0;
}