#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define _USE_MATH_DEFINES
#include <math.h>
#define rep(i,n) for(int i = 0;i < n;i++)
#define NIL = -1;
#define all(x) x.begin(),x.end()
const ll INF = 1LL<<60;
const ll mod = 1e9 + 7;
 
int digit(ll x) {
    if (x / 10 == 0) return 1;
    return digit(x / 10) + 1;
}
 
ll gcd(long long a,long long b) {
    if (a < b) swap(a,b);
    if (b == 0) return a;
    
    return gcd(b,a%b);
}
 
ll lcm(ll a,ll b){
    return ((a * b == 0)) ? 0 : (a / gcd(a,b) * b);
}
 
double DegreeToRadian(double degree){
    return degree * M_PI / 180.0;
}
 
 
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
 
 
///////////////////////////////////////////////////////////////////////////////////
int cnt[100010];
int main(){
    int n, q;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    for (int i = 0;i < n;i++){
        cin >> a[i];
        sum += a[i];
        cnt[a[i]]++;
    }
    cin >> q;
    vector<long long> ans(q+1);
    ans[0] = sum;
    for (int i = 0;i < q;i++){
        int b,c;
        cin >> b >> c;
        sum += (c - b) * cnt[b];
        cnt[c] += cnt[b];
        cnt[b] = 0;
        cout << sum << endl;
    }
    return 0;
}