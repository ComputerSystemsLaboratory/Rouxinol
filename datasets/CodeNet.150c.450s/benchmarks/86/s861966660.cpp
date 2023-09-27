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
typedef pair<int, int>PA;
using namespace std;
#define MAX  999999
int main(){
    while(true){
    int n,m; double p; cin >> n >> m >> p;
        if(n+m+p == 0)break;
    vi v(2000,0); int sum = 0;
    rep(i,n){
        int temp;cin >> temp;
        v[i+1]=temp;sum+=temp*100;
    }
    double money = (double)(sum-sum*(p/100));
    if(v[m]) cout << (int)money/v[m] << endl;
    else
        cout << 0 << endl;
    }
}