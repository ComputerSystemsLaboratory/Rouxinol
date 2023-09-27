#include <bits/stdc++.h>
using namespace std;
    
#define IOS cin.sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define repn(i, a, b) for (int i = a;i<=b;i++)
#define ll long long int
#define pb push_back
//#define mp make_pair
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define mem(x) memset(x, 0, sizeof(x))
#define ritr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define pai pair < int, int> 
#define pal pair < ll, ll> 
#define vi vector <int> 
#define vl vector < ll > 
#define vpai vector < pii > 

const int mod = 1e9+7;
const int INF = INT_MAX;
const int sze = 3005;

map<string,int>mp;

void solve(string str,int val=0) {
    cout<<str<<" x "<<mp[str]<<endl;
}

int main() {
    IOS;

    int t = 1;
    cin >> t;
    while (t--) {
        string str;
       //solve();
       cin>>str;
       mp[str]++;
    }
    
     solve("AC");
     
      solve("WA");
       solve("TLE"); solve("RE");

  return 0;
}