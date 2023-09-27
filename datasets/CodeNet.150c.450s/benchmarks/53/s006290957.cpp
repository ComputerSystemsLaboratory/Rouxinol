#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll INF = 1001001001;
const double EPS = 1e-10;
struct Edge { ll from, to, cost; };
using Graph = vector<vector<Edge>>;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    cout<<n<<':';
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            n/=i;
            cout<<' '<<i;
        }
    }
    if(n!=1)cout<<' '<<n;
    cout<<endl;
}
