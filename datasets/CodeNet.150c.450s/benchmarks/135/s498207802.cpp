#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <cmath>

#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(i,x) for(auto i=(x).begin(); i!=(x).end();i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vec vector
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
#define PI 3.1415926535
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};

using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m&&n&&m){
        vector<int> h(1500010,0),w(1500010,0);
        vector<int> vh(n),vw(m);

        rep(i,0,n){
            cin>>vh[i];
            if(i){
                vh[i]+=vh[i-1];
                h[vh[i]]++;
            }
        }

        rep(i,0,m){
            cin>>vw[i];
            if(i){
                vw[i]+=vw[i-1];
                w[vw[i]]++;
            }

        }

        rep(i,0,n)rep(j,0,i){
            h[vh[i]-vh[j]]++;
        }
        rep(i,0,m)rep(j,0,i){
            w[vw[i]-vw[j]]++;
        }
        w[vw[0]]++;
        h[vh[0]]++;

        ll ans=0;
        rep(i,1,1500010){
            if(h[i]&&w[i]&&0){
                cout<<h[i]<<" "<<w[i]<<" "<<i<<endl;
            }
            ans+=h[i]*w[i];
        }
        cout<<ans<<endl;
    }

    
    return 0;
}

