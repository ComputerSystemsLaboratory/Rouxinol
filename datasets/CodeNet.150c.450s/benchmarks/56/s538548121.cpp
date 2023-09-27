#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int mi = 10000000, ma = -100000000;
        long long sum = 0;
        int inp;
        rep(i,n){
            cin >> inp;
            if(inp < mi) mi = inp;
            if(inp > ma) ma = inp;
            sum+= inp;
        }
            if(!n){
                mi = ma = sum = 0;
            }
        cout << mi << ' ' << ma << ' ' << sum << endl;
    }
}