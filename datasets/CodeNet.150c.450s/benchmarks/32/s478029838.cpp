#include <bits/stdc++.h>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

int main(){
    int n;
    while(cin>>n, n){
        int a, b; cin>>a>>b;
        vector<int> p(n);
        for(int i=0; i<n; i++) cin>>p[i];

        int gmin=1e9;
        int ans;
        for(int i=0; i+1<n; i++){
            if(a-1<=i && i<=b-1){
                if(p[i+1]-p[i]<=gmin){
                    gmin=p[i+1]-p[i];
                    ans=i+1;
                }
            }
        }
        cout << ans << endl;
    }
}
