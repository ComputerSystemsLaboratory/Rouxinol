#include "bits/stdc++.h"

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;
const int MOD = 1e9 + 7;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n,a,b,c,x;
    while(cin>>n>>a>>b>>c>>x,n||a||b||c||x){
        vector<int> y(n);
        for(int i=0;i<n;i++) cin>>y[i];
        int cnt=0,idx=0;;
        while(true){
            if(x==y[idx]) idx++;
            if(idx==n) break;
            cnt++;
            if(cnt>10000) break;
            x = (a*x+b)%c;
        }
        if(cnt>10000) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }
}