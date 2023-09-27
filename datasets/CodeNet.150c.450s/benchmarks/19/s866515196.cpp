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
    int a[3010],b[3010];
    int ct = 0;
    
    while(true){
        cin >> a[ct] >> b[ct];
        if(a[ct] == 0 && b[ct] == 0) break;
        ct++;
    }
    
    ct = 0;
    while(a[ct] != 0 || b[ct] != 0){
        if(a[ct]>b[ct])cout << b[ct] <<" " << a[ct] << endl;
        else cout << a[ct] << " " << b[ct] << endl;
        ct++;
    }
}







