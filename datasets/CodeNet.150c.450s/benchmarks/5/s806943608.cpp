#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define vi vector<int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;



int main(){
    int n; cin >> n;
    vi a(n);
    
    rep(i,n) cin >> a[i];
    
    Reverse(a);
    
    rep(i,n-1){
        cout << a[i] << " ";
    }
    cout <<a[n-1] << endl;
}

