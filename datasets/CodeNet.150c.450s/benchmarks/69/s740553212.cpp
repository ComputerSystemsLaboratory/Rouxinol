#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;

#define PI         acos(-1.0)
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

typedef long long ll;

int ball[10];
stack<int> r, l;

bool dfs(int n){
    if(n==10) return true;
    bool ret = false;
    // r?????\??????
    int rt = r.top();
    r.push(ball[n]);
    if(r.top()>rt){
        ret |= dfs(n+1);
        r.pop();
    }
    else r.pop();

    int lt = l.top();
    l.push(ball[n]);
    if(l.top()>lt){
        ret |= dfs(n+1);
        l.pop();
    }
    else l.pop();
    return ret;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        while(!r.empty()) r.pop();
        while(!l.empty()) l.pop();
        r.push(0);
        l.push(0);
        FOR(i,0,10) cin >> ball[i];
        if(dfs(0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}