#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define rep(i,e)for(int i=0;i<e;i++)
#define grade(a) cout << a << endl
using namespace std;

int main(){
    int n, m, l;
    int i, j, k;
    cin >> n >> m >> l;
    int A[n][m];
    int B[m][l];
    rep(i,n){
        rep(j,m) cin >> A[i][j];
    }
    rep(i,m){
        rep(j,l) cin >> B[i][j];
    } 
    rep(i,n){
        rep(j,l){
            long s=0;
            rep(k,m) s += A[i][k] * B[k][j];
            cout << s;
            if(j!=l-1)cout << " ";
        }
        cout << endl;
    }
    return 0;
}
