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
    vector<int> v,oddv;
    for(ll i=1;;i++){
        if(i*(i+1)*(i+2)/6<=2000000){
            v.pb(i*(i+1)*(i+2)/6);
        }
        else break;
    }
    int ans1[1000010],ans2[1000010];
    rep(i,0,1000010) ans1[i]=ans2[i]=INF;
    ans1[0]=0; ans2[0]=0;
    rep(i,0,1000000){
        ans1[i]=i; ans2[i]=i;
        for(int j=0;i>=v[j];j++){
            ans1[i]=min(ans1[i-v[j]]+1,ans1[i]);
            if(v[j]%2==1)ans2[i]=min(ans2[i],ans2[i-v[j]]+1);
        }
    }

    int n;
    while(cin>>n&&n){
        cout<<ans1[n]<<" "<<ans2[n]<<endl;
    }
    
    return 0;
}

