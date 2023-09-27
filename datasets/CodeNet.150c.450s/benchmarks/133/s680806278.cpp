#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i,n,k) for(int i=(n);i<(k);i++)
#define ALL(a)  (a).begin(),(a).end()
int d=365, n=26;
int c[27];
int s[366][27];
int a[366];
int ans[366]={};
int last[27]={};
void Main(){
    cin >> d;
    For(i,1,n+1) cin >> c[i];
    For(i,1,d+1) For(j,1,n+1) cin >> s[i][j];
    For(i,1,d+1) cin >> a[i];
    For(i,1,d+1){
        ans[i] = ans[i-1] + s[i][a[i]];
        last[a[i]] = i;
        For(j,1,n+1){
            ans[i] -= (i-last[j]) * c[j];
        }
    }
    For(i,1,d+1) cout << ans[i] << endl;
}
int main(){
    Main();
    /*
    東方風神録は神が出てくるので当然神ゲー
    */
    return 0;
}