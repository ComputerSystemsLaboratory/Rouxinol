#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>
#include<utility>
#include<set>
#include<stack>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int>PI;
using namespace std;
#define MAX  999999
int main(){
    vs s(10000);
    int  n; cin >> n;
    rep(i,n) cin >> s[i];
    int t; cin >> t; vs h(10000);
    rep(i,t) cin >> h[i];
    bool check = true; bool belong = false;
    rep(i,t){
        belong = false;
        rep(j,n){
        if(h[i] ==s[j]){
            belong = true;
            if(check){cout<< "Opened by " << h[i] << endl; check = false;}
            else {cout << "Closed by " << h[i] << endl; check = true;}
            break;
            }
        }
        if(!belong) cout << "Unknown " << h[i] << endl;
    }
}