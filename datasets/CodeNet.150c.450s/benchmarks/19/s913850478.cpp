#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int x,y;
    while(cin >> x >> y){
        if(x == y && x == 0) break;
        if(x <= y) cout << x << ' ' << y << endl;
        else if(x > y) cout << y << ' '  << x << endl;
    }
}