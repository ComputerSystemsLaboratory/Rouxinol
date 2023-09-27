#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

struct P{
    char name[11];
    int time;
};

int main(){
    queue<struct P> qu;;
    int n, ms;
    while(cin >> n >> ms){
        int ans = 0;
        rep(i, n){
            struct P inp;
            cin >> inp.name >> inp.time;
            qu.push(inp);
        }
        while(!qu.empty()){
            qu.front().time-= ms;
            ans+= ms;
            if(qu.front().time > 0){
                qu.push( qu.front() );
            }else{
                ans+= qu.front().time;
                cout << qu.front().name << ' ' << ans << endl;
            }
            qu.pop();
        }
    }
}