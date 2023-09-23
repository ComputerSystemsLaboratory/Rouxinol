#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n)-1; i >= k; i--)

#define debug(x) cerr<<#x<<": "<<x<<endl;

#define fi first
#define se second

#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;

const int inf = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

bool SO[1001000];

void erast(int n){
    memset(SO,true,sizeof(SO));
    SO[1] = false;
    SO[0] = false;
    REP(i,2,sqrt(n)){
        if(SO[i]){
            REP(j,2,n){
                if(i*j>=1000100) break;
                SO[i*j] = false;
            }
        }
    }
}

int main(){
//    ifstream in("input.txt");
//    cin.rdbuf(in.rdbuf());
    erast(1000100);
    int a,d,n;
    while(cin >> a >> d >> n,a+d+n){
        rep(i,n){
            while(!SO[a]) a+=d;
            a+=d;
        }
        cout << a-d << endl;
    }



    return 0;
}
