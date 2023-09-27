#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=1234567;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-3;
int dx[4]={0,1,0,1};
int dy[4]={0,0,1,1};
vector<int> ans[110];
int main(){
    int a[110];
    int id=0;
    int c[110]={};
    while(cin>>a[id]){
        c[a[id]]++;
        id++;
    }
    for(int i=1;i<=100;i++){
        ans[c[i]].push_back(i);
    }
    for(int i=100;i>=1;i--){
        if(ans[i].size()!=0){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<endl;
            }
            return 0;
        }
    }
    return 0;
}

