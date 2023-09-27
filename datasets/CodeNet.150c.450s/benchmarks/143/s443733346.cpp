#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <cmath>
#include <bitset>
#define _GLIBCXX_DEBUG
#define rep(i,n) for(int i=0;i<n;i++)
#define inf 1e9+7
using namespace std;
typedef long long ll;
const double pi=acos(-1);

ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    ll sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;
        sum+=x;
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int b,c;
        cin >> b >> c;
        if(mp[b]==0) cout << sum << endl;
        else{
            sum-=(ll)b*mp[b];
            sum+=(ll)c*mp[b];
            mp[c]+=mp[b];
            mp[b]=0;
            cout << sum << endl;
        }
    }
}