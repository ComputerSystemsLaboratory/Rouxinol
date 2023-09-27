#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define pb push_back
#define mp make_pair
#define ms memset
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define lower_bound lb
#define upper_bound ub

int main()
{
    int D; cin >> D;
    int C[27]; FOR(i,1,26) cin >> C[i];
    int S[D+1][27];
    FOR(i,1,D){
        FOR(j,1,26) cin >> S[i][j];
    }
    int T[D+1]; FOR(i,1,D) cin >> T[i];
    int last[27]; ms(last,0,sizeof(last));
    ll sat = 0;
    FOR(i,1,D){
        last[T[i]] = i;
        sat += S[i][T[i]];
        FOR(j,1,26) sat -= C[j] * (i - last[j]);
        cout << sat << '\n';
    }
    return 0;
}