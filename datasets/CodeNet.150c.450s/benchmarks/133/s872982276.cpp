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
    int D;
    cin >> D;
    vector<int>c(NUM_OF_CONTESTS);
    REP(i,NUM_OF_CONTESTS)cin >> c[i];

    int s[D][NUM_OF_CONTESTS];
    REP(i,D){REP(j,NUM_OF_CONTESTS){cin >> s[i][j];}}

    vector<int>t(D);
    REP(i,D){
        cin >> t[i];
        t[i]--;
    }

    ll sat = 0;
    vector<vector<int>>last(D+1,vector<int>(NUM_OF_CONTESTS,0));


    REP(i,D){
        sat+=s[i][t[i]];
        last[i+1][t[i]]=i+1;
        REP(j,NUM_OF_CONTESTS){
            if(j!=t[i])
                last[i+1][j] = last[i][j];
            sat-=c[j]*(i+1-last[i+1][j]);
        }
        cout << sat <<endl;
    }
    return 0;
}