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
    int a,b,c;
    cin >> a >> b >> c;
    
    int ans = 0;
    Rep(i,a,b+1){
        if(c%i == 0) ans++;
    }
    cout << ans << endl;
}







