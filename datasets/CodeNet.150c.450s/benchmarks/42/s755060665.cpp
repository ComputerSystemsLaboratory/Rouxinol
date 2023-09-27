#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
#include <bitset>
#include <cstdio>
#include <set>
#include <stack>
#include <queue>
//#include <bits/stdc++.h>
#define rep(i,n) Rep(i,0,n)
#define Rep(i,k,n) for(int i=k ; i<n ; i++)
#define rep1(i,n) for(int i=1 ; i<=n ; i++)
#define vi vector<int>
#define vii vector<int,int>
#define Sort(v) sort(v.begin(),v.end())
#define Reverse(v) reverse(v.begin(),v.end())

//const int MOD = 1000000007;
//const int INF = 1<<30;
using namespace std;

string yn(bool x){
    return x ? "Yes" : "No";
}

int calc(int x,int y,string s){
    if(s == "+") return x+y;
    if(s == "-") return x-y;
    if(s == "*") return x*y;
    return 0;
}

int main(){
    queue<pair<string,int>> que;
    int ans = 0;
    int n,q; cin >> n >> q;
    
    string name;int time;
    rep(i,n){
        cin >> name >> time;
        que.push(make_pair(name, time));
    }
    while(!que.empty()){
        pair<string,int> top = que.front();
        que.pop();
        
        if(top.second<=q){
            ans += top.second;
            cout << top.first << " " << ans << endl;
        }else{
            
            ans += q;
            que.push(make_pair(top.first, top.second-q));
        }
    }
    
    
}


