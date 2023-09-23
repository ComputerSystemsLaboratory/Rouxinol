#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
    int n;
    int m=0;
    int cost[50][50];
    while(cin>>n){
        if(n==0)break;
        m=0;
        rep(i,50)rep(j,50)cost[i][j]=99999999;
        rep(i,50)cost[i][i]=0;
        rep(i,n){
            int a,b,c;
            cin>>a>>b>>c;
            m=max(m,max(a,b));
            cost[a][b]=cost[b][a]=c;
        }
        m++;
        rep(k,m){
            rep(i,m){
                rep(j,m){
                    cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
                }
            }
        }
        int sum=99999999;
        int t=-1;
        rep(i,m){
            int tmp=0;
            rep(j,m){
                tmp+=cost[i][j];
            }
            if(tmp<sum){
                t=i;
                sum=tmp;
            }
        }
        cout<<t<<" "<<sum<<endl;
    }
}