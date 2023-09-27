#include<bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
typedef long long ll;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define REP(i,num,n) for(ll i=num, i##_len=(n); i<i##_len; ++i)
#define repprev(i,a,b) for(ll i=b-1;i>=a;i--)
#define reprev(i,n) repprev(i,0,n)
using namespace std;
#define sz(x) ((int)(x).size())
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
#define MEMSET(v, h) memset((v), h, sizeof(v))
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define MAX 100000

int A[MAX], n;

int partition(int p, int r){
    int x, i, j, t;
    x = A[r];
    i = p - 1;
    for( j = p; j < r; ++j){
       if(A[j] <= x ) {
          ++i;
          t = A[i]; A[i] = A[j]; A[j] = t;
       }
    }
    t = A[i + 1]; A[i + 1] = A[r]; A[r] = t;
    return i + 1;
}

int main(void){
    int i, q;

    cin >> n;
    rep(i,n) cin >> A[i];

    q = partition(0, n - 1);

    rep(i,n){
        if( i ) cout << " ";
        if( i == q ) cout << "[";
        cout << A[i];
        if ( i == q ) cout << "]";
    }
    cout << endl;

    
}
