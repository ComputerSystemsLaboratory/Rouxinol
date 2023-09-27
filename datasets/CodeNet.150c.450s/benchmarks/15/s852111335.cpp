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

int main(){
    int n, m, ans = 0;
    int all[10001];
    cin >> n;
    rep(i, n){
        cin >> all[i];
    }
    cin >> m;
    rep(i, m){
        int j = 0, inp;
        cin >> inp;
        all[n] = inp;
        while(all[j] != inp){
            j++;
        }
        if(j != n) ans++;
    }
    cout << ans << endl;
}