#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <math.h>
#include <string>
#include <numeric>
#include <queue>
#include <cstdio>
#include <cstring>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;++i)
#define rep1(i,n) for(ll i=1;i<n;++i)
#define mrep(i,n) for(ll i=n;i>=0;--i)
#define all(a) (a).begin(),(a).end()
#define vl vector<ll>
#define vvl vector<vector<ll> >
#define vb vector<bool>
#define vvb vector<vector<bool> >
#define pl pair<ll,ll>
#define inf 1001001001001001000
//#define mod 1000000007
#define mod 2
#define pi 3.1415926535
using namespace std;
struct __INIT{
    __INIT(){
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout<<fixed<<setprecision(15);
    }
}__init;

//hh:mm:ss
ll strtobyo(string s){
    ll hh = (s[0]-'0')*10+s[1]-'0';
    ll mm = (s[3]-'0')*10+s[4]-'0';
    ll ss = (s[6]-'0')*10+s[7]-'0';
    return 60*60*hh+60*mm+ss;
}

int main(void){
    while(true){
        ll n;
        cin>>n;
        if(n == 0) break;
        vl imos(60*60*24+1,0);
        rep(i,n){
            string s,t;
            cin>>s>>t;
            ll times = strtobyo(s);
            ll timet = strtobyo(t);
            imos[times]++;
            imos[timet]--;
        }
        rep1(i,60*60*24+1) imos[i] += imos[i-1];
        ll maxi = *max_element(all(imos));
        cout<<maxi<<endl;
    }
}
