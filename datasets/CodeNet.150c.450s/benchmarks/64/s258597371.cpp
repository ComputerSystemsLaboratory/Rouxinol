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

int n, A[21];

bool solve(int x, int count){
    if(count > n) return false;
    if(x == 0) return true;
    if(x < 0) return false;
    int res = solve(x - A[count], count + 1) || solve(x, count + 1);
    return res;
}

int main(){
    int m;
    cin >> n;
    rep(i, n){
        cin >> A[i];
    }
    cin >> m;
    int inp;
    rep(i, m){
        cin >> inp;
        if(solve(inp, 0)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}