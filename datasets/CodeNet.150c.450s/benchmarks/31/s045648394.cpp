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
const int INF = 1<<30;
using namespace std;

string disp(bool x){
    return x ? "Yes" : "No";
}

int main(){
    int n; cin >> n;
    int r[n];
    rep(i,n) cin >> r[i];
    
    int maxv = -1*INF;
    int minv = r[0];
    
    rep1(i,n-1){
        maxv = max(maxv,r[i]-minv);
        minv = min(minv,r[i]);
    }
    
    cout << maxv << endl;
}





