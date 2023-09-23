

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
int mod(ll a){
    int c=a%1000000007;
    if(c>=0)return c;
    else return c+1000000007;
}
typedef pair<int,int> i_i;
typedef pair<ll,ll> l_l;
#define inf 100000000/*10^8*/

/////////////////////////////////


int h,w;
char m[103][103];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void dfs(int x,int y){
    char s=m[x][y];
    m[x][y]='.';
    for(int i=0;i<=3;i++){
        int xx=x+dx[i],yy=y+dy[i];
        if(m[xx][yy]==s)dfs(xx,yy);
    }
}

int main(){
    while(cin>>h>>w,h||w){
        int ans=0;
        for(int i=0;i<=h-1;i++)scanf("%s",m[i]);
        for(int i=0;i<=h-1;i++)for(int j=0;j<=w-1;j++){
            if(m[i][j]!='.')dfs(i,j),ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
