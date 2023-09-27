#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <map>
#include <bitset>
#include <cmath>
#include <set>
#include <utility>
#include <sstream>

#define INF 1000000000000
#define MOD 1000000007 //10^9+7:合同式の法

using namespace std;
typedef long long ll;

//マクロ
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) x.begin(),x.end()
#define chmax(x,y) (x = max(x,y))
#define chmin(x,y) (x = min(x,y))

int main(){
    ll N,K;
    cin >> N >> K;

    vector<ll> A(N);

    for(ll i = 0;i < N;i++)
        cin >> A.at(i);

    vector<ll> tensu(N - K + 1);

    tensu.at(0) = A.at(0);
    for(ll i = 1;i < K;i++){
        tensu.at(0) *= A.at(i);
        //cout << tensu.at(0) << endl;
    }

    for(ll i = 1;i < N - K+1;i++){
        tensu.at(i) = tensu.at(i-1);
        //cout << tensu.at(i) << endl;
        tensu.at(i) -= A.at(i-1);
        //cout << "watta : "<<tensu.at(i) << endl;
        tensu.at(i) += A.at(i+K-1);
    }

    /*for(ll i = 0;i < N - K + 1;i++)
        cout << tensu.at(i) << endl;
    */

    for(ll i = 0;i < N - K;i++){
        if(tensu.at(i) < tensu.at(i+1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

    return 0;
}