#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define vi vector<int>
#define Sort(v) sort(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;


int calc(int x,int y,char z){
    
    if(z =='+') return x+y;
    if(z =='-') return x-y;
    if(z =='*') return x*y;
    if(z =='/') return x/y;
    
    return 0;
}

int main(){
    while(true){
        int a,b; char op;
        cin >> a >> op >> b;
        
        if(op =='?') break;
        
        cout << calc(a,b,op) << endl;
    }
    
    
    
}







