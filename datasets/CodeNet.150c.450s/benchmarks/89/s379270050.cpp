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

    // sieve of eratosthenes
    vector<int> pnums(2000000,0);
    for(int i=2;i<2000000;i++) pnums[i]=1;
    for(int i=2;i*i<2000000;i++){
        if(pnums[i]){
            for(int j=i*i;j<2000000;j+=i){
                pnums[j]=0;
            }
        }
    }
    int a,d,n;
    while(cin>>a>>d>>n,a||d||n){
        int cnt=0,res=a;
        while(true){
            if(pnums[res]) cnt++;
            if(cnt==n){
                break;
            }
            res+=d;
        }
        cout<<res<<endl;
    }
}