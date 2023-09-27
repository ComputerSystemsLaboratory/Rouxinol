#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define rep1(i,n) for(int i=1 ; i<=n ; i++)
#define vi vector<int>
#define vii vector<int,int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;

string disp(bool x){
    return x ? "Yes" : "No";
}

int main(){
    int n; cin >> n;
    int r[n];
    rep(i,n) cin >> r[i];
    
    int flag = 1;
    int ok = 0;
    int cnt = 0;
    
    while(flag){
        flag = 0;
        for(int i=n-1 ; i>=ok+1 ; i--){
            if(r[i]<r[i-1]){
                swap(r[i],r[i-1]);
                cnt++;
                flag = 1;
            }
        }
        ok++;
    }
    
    rep(i,n) cout << r[i] << (i != n-1 ? ' ' :'\n');
    cout << cnt << endl;
}





