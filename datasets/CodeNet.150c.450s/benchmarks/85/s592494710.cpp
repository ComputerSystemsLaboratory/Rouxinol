#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
const int inf=1e9+7;
const ll mod=1e9+7;

ll DP[105][105];
ll larr[105], rarr[105];

ll solve(int l, int r){
    if(DP[l][r] != 0) return DP[l][r];
    for(int i=l;i<r;++i){
        if(DP[l][r] == 0) DP[l][r] = solve(l, i) + solve(l+1, r) + larr[l] * rarr[i] * rarr[r];
        else DP[l][r] = min(solve(l, i) + solve(i+1, r) + larr[l] * rarr[i] * rarr[r], DP[l][r]);
    }
    return DP[l][r];
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>larr[i]>>rarr[i];
    }
    cout<<solve(0, n-1)<<endl;
}

