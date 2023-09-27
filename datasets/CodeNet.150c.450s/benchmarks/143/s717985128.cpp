#include <bits/stdc++.h>
using namespace std;

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

#define forn(n) for(int i = 0; i < n; i++)
#define fork(k, n) for(int i = k; i < n; i++)

#define pb(n) push_back(n);

typedef long long ll;
typedef double dbl;

const int MX = 1e6;
const int MOD = 1e9 + 7;
const string ALPHA = "abcdefghijklmnopqrstuvwxyz";
const double PI = 3.1415926535;


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
	//Code here bby
  int n;
  cin>>n;
  int elems[n];
  ll sum = 0;
  int freq[MX];
  memset(freq, 0, 4 * MX);
  forn(n){
    int elem;
    cin>>elem;
    elems[i] = elem;
    freq[elem]++;
    sum += elem;
  }
  int q; cin>>q;
  forn(q){
    ll b, c;
    cin>>b>>c;
    sum += (c - b) * (freq[b]);
    freq[c] += freq[b];
    freq[b] = 0;
    cout<<sum<<endl;
  }
}
