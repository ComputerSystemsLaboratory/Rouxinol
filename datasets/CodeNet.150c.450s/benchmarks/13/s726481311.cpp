#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<numeric>
#include<map>
#include<set>
#include<bitset>
#define REP(i,m,n) for(int i = m; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define ALL(a)  (a).begin(),(a).end()
template<class T> void chmax(T& a, T b) { if (a < b) { a = b; } }
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; } }
using namespace std;

int main(void){
    string s,p;
    cin >> s >> p;
    
    s += s;
    
    for(int i = 0; i < s.size()-p.size(); i++){
        if(p == s.substr(i,p.size())){
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}
