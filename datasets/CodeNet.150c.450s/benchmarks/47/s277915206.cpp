#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int w,h,x,y,r;
    while(cin >> w >> h >> x >> y >> r){
        bool c = true;
        if(x - r < 0 || x + r > w) c = false;
        if(y - r < 0 || y + r > h) c = false;
        if(c) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}