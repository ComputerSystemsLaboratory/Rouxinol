#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define vi vector<int>
#define Sort(v) sort(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;




int main(){
    vi a(3);
    cin >> a[0] >> a[1] >> a[2];
    
    Sort(a);
    
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
}







