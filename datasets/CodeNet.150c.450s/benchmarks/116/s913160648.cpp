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
#include <iomanip>

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
#define fcout cout<<fixed<<setprecision(10)
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//template<typename T>void pp(T x){cout<<x<<endl;}

using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k&&n&&k){
        vector<int> v(n+1,0);
        rep(i,0,n){
            cin>>v[i+1];
            if(i)v[i+1]+=v[i];
        }

        int ans=0;
        rep(i,k+1,n+1){
            ans=max(ans,v[i]-v[i-k]);
        }
        cout<<ans<<endl;
    }

    
    return 0;
}
