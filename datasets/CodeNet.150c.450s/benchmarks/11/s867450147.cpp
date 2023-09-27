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
    
    bool s[14],h[14],c[14],d[14];
    
    //初期化
    rep(i,14){
        s[i] = h[i] = c[i] = d[i] = 0;
    }
    
    //バケット
    rep(i,n){
        char suit; int a;
        cin >> suit >> a;
        
        if(suit == 'S') s[a] = 1;
        if(suit == 'H') h[a] = 1;
        if(suit == 'C') c[a] = 1;
        if(suit == 'D') d[a] = 1;
        
    }
    //表示
    Rep(i,1,14){
        if(!s[i]) cout << "S " << i << endl;
    }
    Rep(i,1,14){
        if(!h[i]) cout << "H " << i << endl;
    }
    Rep(i,1,14){
        if(!c[i]) cout << "C " << i << endl;
    }
    Rep(i,1,14){
        if(!d[i]) cout << "D " << i << endl;
    }
}




