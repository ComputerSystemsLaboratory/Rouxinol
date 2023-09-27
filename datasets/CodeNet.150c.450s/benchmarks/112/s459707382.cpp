#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
#define rep(i, j) for(int i = 0; i < j; i++)
#define f(i, k, j) for(int i = k; i < j; i++)
const int INF = (1 << 26);

int main(){
    int n;
    while(cin >>n && n){
        map<string, string> con;
        stringstream ss;
        rep(i, n){
            string a, b; cin >>a >>b;
            con[a] = b;
        }
        int m; cin >>m;
        rep(i, m){
            string a; cin >>a;
            if(con.find(a) != con.end()) ss <<con[a];
            else ss <<a;
        }
        cout <<ss.str() <<endl;
    }
    return 0;
}