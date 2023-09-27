#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define rep(i, n) for (int i=0; i<(n); i++)
#define rep2(i, x, n) for (int i=x; i<(n); i++)
using namespace std;
int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    rep(i,n){
        
        int a, b, c;
        cin >> a >> b >> c;
        
        if(a>b&&a>c){
            cout << ( (a == b) == c ? "NO" : b*b + c*c == a*a ? "YES" : "NO" ) << endl;
        }else if(b>a&&b>c){
            cout << ( (a == b) == c ? "NO" : a*a + c*c == b*b ? "YES" : "NO" ) << endl;
        }else{
            cout << ( (a == b) == c ? "NO" : a*a + b*b == c*c ? "YES" : "NO" ) << endl;
        }
    }
    return 0;
}