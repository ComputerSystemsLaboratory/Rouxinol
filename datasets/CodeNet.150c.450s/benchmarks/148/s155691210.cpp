/**In the name of Allah, the Most Merciful, the Most Merciful.**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define INF 9223372036854775806
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define EPS 1e-9
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll min(ll a,ll b) {if(a<b) return a; else return b;}

int main()
{
    int n;
    cin>>n;
    string s;
    vector<string> v{"AC", "WA", "TLE","RE"};
    map<string,int> cnt;
    for(int i=1;i<=n;i++){
        cin>>s;
        cnt[s]++;
    }
    for(string s:v){
        cout<<s<<" x "<<cnt[s]<<endl;
    }

    return 0;
}


