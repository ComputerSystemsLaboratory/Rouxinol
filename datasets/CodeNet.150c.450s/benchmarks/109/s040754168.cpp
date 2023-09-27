#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
typedef long long ll;
//約数列挙
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    //sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
vector<int> dx={1,0,-1,0};vector<int> dy={0,-1,0,1};

signed main () {
    int n;
    while(cin>>n){
        if(n==0)break;
        vector<int> list(24*3600 + 60 * 60 + 100,0);
        REP(i,n){
            string start;cin >> start;
            ll stime = ((start[0] - '0') * 10 + (start[1] - '0')) * 3600
                       +  ((start[3] - '0') * 10 +(start[4] - '0')) * 60
                       + ((start[6] - '0') * 10 + (start[7] - '0'));
            string endd;cin >> endd;
            ll etime = ((endd[0] - '0') * 10 + (endd[1] - '0')) * 3600
                       +  ((endd[3] - '0') * 10 +(endd[4] - '0')) * 60
                       + ((endd[6] - '0') * 10 + (endd[7] - '0'));
            list[stime]+=1;list[etime]-=1;
        }
        FOR(j,1,24*3600 + 60 * 60 + 100){
            list[j] += list[j-1];
        }
        cout << *max_element(ALL(list)) << endl;
    }
}
