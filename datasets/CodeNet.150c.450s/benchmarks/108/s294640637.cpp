#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <cmath>
#include <cstring>

#define LP(i,n) for(int i=0;i<n;i++)
#define Mset(x,v) memset(x,v,sizeof(x))

using namespace std;
using LL=long long;
const int INF=100000000;

int A[110][110],d[100];

int main(){
    int n,u,k,v;
    cin>>n;
    LP(i,n){
        cin>>u>>k;
        LP(j,k){
            cin>>v;
            A[u-1][v-1]=1;
        }
    }
    queue<int> q;
    q.push(0);
    LP(i,n) d[i]=INF;
    d[0]=0;
    int x=0;
    while(!q.empty()){
        x=q.front();
        q.pop();
        LP(i,n){
            if(A[x][i]==0) continue;
            if(d[i]!=INF) continue;
            d[i]=d[x]+1;
            q.push(i);
        }
    }
    LP(i,n){
        cout<<i+1<<" "<<((d[i]==INF)?(-1):d[i])<<endl;
    }
    return 0;
}

