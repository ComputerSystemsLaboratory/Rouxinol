#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
typedef long long ll;
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
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
    string s,t;cin >> s >> t;
    int slen = s.length();int tlen = t.length();
    vector<vector<int>> lcm(slen+1,vector<int>(tlen+1,0));
    REP(i,slen)lcm[i+1][0]+=lcm[i][0]+1;
    REP(i,tlen)lcm[0][i+1]+=lcm[0][i]+1;
    REP(i,slen)REP(j,tlen){
        if(s[i]==t[j]){
            lcm[i+1][j+1]=min({lcm[i][j],lcm[i+1][j]+1,lcm[i][j+1]+1});
        }else{
            lcm[i+1][j+1]=min({lcm[i][j]+1,lcm[i+1][j]+1,lcm[i][j+1]+1});
        }
    }
    cout << lcm[slen][tlen] << endl;
}
