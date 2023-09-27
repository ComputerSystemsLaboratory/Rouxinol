#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#define REP(i,a) for (int i = 0;i < (a);++i)
#define FOR(i,a,b) for (int i = (a);i < (b); ++i)
#define FORR(i,a,b) for (int i = (a);i >= (b); --i)
#define ALL(obj) (obj).begin(),(obj).end()
#define SORT(list) sort(ALL((list)));
#define MOD 1000000007
using namespace std;
using ll = long long;

#define NUM_OF_CONTESTS 26
int main(){
    int d;
    cin >> d;
    vector<int>c(NUM_OF_CONTESTS);
    REP(i,NUM_OF_CONTESTS)cin >> c[i];

    int s[d][NUM_OF_CONTESTS];
    REP(i,d){REP(j,NUM_OF_CONTESTS){cin >> s[i][j];}}

    vector<int>t(d);
    REP(i,d){
        cin >> t[i];
        t[i]--;
    }

    ll sat = 0;
    vector<int>last(NUM_OF_CONTESTS,0);

    REP(i,d){
        sat+=s[i][t[i]];
        last[t[i]]=i+1;
        REP(j,NUM_OF_CONTESTS){
            sat-=c[j]*(i+1-last[j]);
        }
        cout << sat <<endl;
    }
    return 0;
}