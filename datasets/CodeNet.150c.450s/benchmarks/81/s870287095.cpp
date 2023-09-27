#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int n;
int pass[20][20];

int main(){
    while(cin>>n){
        if(n==0)break;
        
        int m=-1;
        rep(i,20)rep(j,20)pass[i][j]=999999999;
        rep(i,20)pass[i][i]=0;
        rep(i,n){
            int a,b,c;
            cin>>a>>b>>c;
            pass[a][b]=c;
            pass[b][a]=c;
            m=max(m,max(a,b));
        }
        m++;
        
        rep(k,m){
            rep(i,m){
                rep(j,m){
                    pass[i][j] = min(pass[i][j],pass[i][k]+pass[k][j]);
                }
            }
        }
        
        
        int num=-1;
        int val = 999999999;
        rep(i,m){
            int sum=0;
            rep(j,m){
                sum+=pass[i][j];
            }
            if(val>sum){
                num=i;
                val=sum;
            }
        }
        cout<<num<<" "<<val<<endl;
        
    }
}