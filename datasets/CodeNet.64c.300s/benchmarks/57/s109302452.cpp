

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
#include<set>
#include<map>

using namespace std;
typedef long long ll;
#define i_7 1000000007
#define i_5 1000000005

ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    else return c+i_7;
}
typedef pair<int,int> i_i;
typedef pair<ll,ll> l_l;
#define inf 100000000//10^8

/////////////////////////////////



int main(){
    int n,m;
    while(cin>>n>>m,n||m){
        bool senbei[n][m];
        for(int i=0;i<=n-1;i++)for(int j=0;j<=m-1;j++)cin>>senbei[i][j];
        bool sen[n][m];
        int ans=0;
        for(int s=0;s<1<<n;s++){
            for(int i=0;i<=n-1;i++){
                if(s>>i&1)for(int j=0;j<=m-1;j++)sen[i][j]=!senbei[i][j];
                else for(int j=0;j<=m-1;j++)sen[i][j]=senbei[i][j];
            }
            int count=0;
            for(int j=0;j<=m-1;j++){
                int cou=0;
                for(int i=0;i<=n-1;i++)if(!sen[i][j])cou++;
                count+=max(cou,n-cou);
            }
            if(count>ans)ans=count;
        }
        cout<<ans<<endl;
    }
    return 0;
}
