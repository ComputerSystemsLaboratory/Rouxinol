#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
typedef long long i64;
int main(){
    int n,r,p,c;
    while (true) {
        /* code */
        cin >> n >> r;
        if(n==0 && r==0) break;
        int hanafuda[n];
        rep(i,n) hanafuda[i]=n-i;
        rep(i,r){
            cin >> p >> c;
            int cs[c];
            rep(j,c){
                cs[j]=hanafuda[p+j-1];
            }
            for(int j=p-2;j>=0;j--){
                hanafuda[j+c]=hanafuda[j];
            }
            rep(j,c){
                hanafuda[j]=cs[j];
            }
        }
        cout << hanafuda[0] << endl;
    }
    return 0;
}