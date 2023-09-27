#include <bits/stdc++.h>
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) (x).begin(),(x).end() 
#define SIZE(x) ((ll)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define INF 1000000000
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;

    string S[N];
    int X[4] = {0};
    REP(i, N){
        cin >> S[i];

        if(S[i] == "AC") X[0]++;
        if(S[i] == "WA") X[1]++;
        if(S[i] == "TLE") X[2]++;
        if(S[i] == "RE") X[3]++;
    }

    cout << "AC x " << X[0] << endl;
    cout << "WA x " << X[1] << endl;
    cout << "TLE x " << X[2] << endl;
    cout << "RE x " << X[3] << endl;

    return 0;
}