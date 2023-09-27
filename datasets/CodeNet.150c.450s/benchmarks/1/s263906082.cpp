#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include<numeric>
#include<cmath>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,ll> pll;
const ll inf = 1LL << 60;

int main(){
    //cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	//cout << fixed << setprecision(15);
    int n; cin >>n;
    vector<int> A(n);
    REP(i,n){
        cin >> A[i];
    }
    vector<int> B(n,INF);

    REP(i,n){
        *lower_bound(ALL(B),A[i]) = A[i];
    }

    REP(i,n){
        if(B[i] == INF){
            cout << i << endl;
            return 0;
        }
    }
    
    cout << n << endl;
}
