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
    
    int cnt = 0;
    rep(i,n){
        int minj = i;
        for(int j=i;j<n;j++){
            if(r[j]<r[minj]) minj = j;
        }
        if(r[i]>r[minj]){
            swap(r[i],r[minj]);
            cnt++;
        }
    }
    
    rep(i,n) cout << r[i] << (i != n-1 ? ' ' : '\n');
    cout << cnt << endl;
}





