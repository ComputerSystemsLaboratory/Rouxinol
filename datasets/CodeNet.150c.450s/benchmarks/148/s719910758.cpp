#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n;i>=0;i--)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;



int main(void){
    int n;
    cin >> n;
    pair <string , int> p[4];
    p[0].first="AC";
    p[1].first="WA";
    p[2].first="TLE";
    p[3].first="RE";
    REP(i,n){
        string s;
        cin >> s;
        REP(j,4){
            if(p[j].first==s)
                p[j].second++;
        }
    }
    REP(i,4){
        cout << p[i].first << " x " << p[i].second << endl;
    }

    
    return 0;
}
