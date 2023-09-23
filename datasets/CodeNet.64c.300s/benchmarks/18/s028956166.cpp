#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n, f[35] = {0};
    f[0] = 1;
    rep(i,31){
        f[i + 1]+= f[i];
        f[i + 2]+= f[i];
        f[i + 3]+= f[i];
    }
    while(cin >> n, n){
        int day = f[n] / 10;
        if(f[n] / 10 == 0) day++;
        int y = day / 365;
        if(day % 365 != 0) y++;
        cout << y << endl;
    }

}