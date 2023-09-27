#include <bits/stdc++.h>
#define ll long long int
#define forr(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
#define oo 1000000000000000000LL
using namespace std;


void _sol(){
    int n,ac=0,wa=0,tle=0,re=0; cin >> n;
    forr(i,n){
        string v; cin >> v;
        if(v[0]=='A' && v[1]=='C') ac++;
        else if( v[0]=='W' && v[1]=='A' ) wa++;
        else if( v[0]=='R') re++;
        else tle++;
    }
    cout << "AC x " << ac << "\n";
    cout << "WA x " << wa << "\n";
    cout << "TLE x " << tle << "\n";
    cout << "RE x " << re << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--) _sol();
}
