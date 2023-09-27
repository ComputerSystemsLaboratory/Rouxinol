#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define sort_1(v) sort(v.begin(),v.end())
#define sort_2(v) sort(v.begin(),v.end(),greater<ll>())
#define reverse(v) reverse(v.begin(),v.end())
typedef long long ll;
typedef long double la;
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];

    rep(i,0,n-k){
        if(a[i] < a[k+i]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}