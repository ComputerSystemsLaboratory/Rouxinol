#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

struct data{
    int a;
    int b;
};

int main(){
    int n,m,tsum, hsum, t[105], h[105];
    struct data ans;
    while(cin >> n >> m, n||m){
        tsum = hsum = 0;
        ans.a = ans.b = 2 << 24;
        rep(i,n){
            cin >> t[i];
            tsum+= t[i];
        }
        rep(i,m){
            cin >> h[i];
            hsum+= h[i];
        }
        rep(i,n){
            rep(j,m){
                if(tsum - t[i] + h[j] == hsum - h[j] + t[i] && ans.a + ans.b > t[i] + h[j]){
                    ans.a = t[i];
                    ans.b = h[j];
                }
            }
        }
        if(ans.a == 2 << 24)
            cout << "-1" << endl;
            else
                cout << ans.a << ' ' << ans.b << endl;
    }
}