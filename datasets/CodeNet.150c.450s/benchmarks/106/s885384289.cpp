#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int x,y,z;
    while(cin >> x >> y >> z){
        int ans = 0;
        range(i,x,y+1){
            if(z % i == 0) ans++;
        }
        cout << ans << endl;
    }
}