#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>
#include<queue>
#include<map>
#include<climits>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF LLONG_MAX
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef long long int ll;

#define ARRAY_MAX 5005

int main(){


    ll n;
    while(cin >> n,n){
        vector<ll> arr(ARRAY_MAX,0);
        REP(i,n){
            cin >> arr[i+1];
        }
        arr[0] = 0;
        REP(i,n){
            arr[i+1] += arr[i];
        }

        ll maxi = -INF;
        for(int i = n;i >= 0;i--){
            for(int j = 0;j < i;j++){
                maxi = max(maxi,arr[i]-arr[j]);
            }
        }
        cout << maxi << endl;
    }

    return 0;
}

