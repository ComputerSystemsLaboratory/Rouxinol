#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>

#define LP(i,n) for(int i=0;i<n;i++)
#define Mset(x,v) memset(x,v,sizeof(x))

using namespace std;
using LL=long long;

static const int MAX=100;
static const int INFTY=(1<<21);
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n,M[MAX][MAX];

void dijkstra(){
    int minv;
    int d[MAX],color[MAX];
    for(int i=0;i<n;i++){
        d[i]=INFTY;
        color[i]=WHITE;
    }
    d[0]=0;
    color[0]=GRAY;
    while(1){
        minv=INFTY;
        int u=-1;
        for(int i=0;i<n;i++){
            if(minv>d[i]&&color[i]!=BLACK){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1) break;
        color[u]=BLACK;
        for(int v=0;v<n;v++){
            if(color[v]!=BLACK&&M[u][v]!=INFTY){
                if(d[v]>d[u]+M[u][v]){
                    d[v]=d[u]+M[u][v];
                    color[v]=GRAY;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<(d[i]==INFTY?-1:d[i])<<endl;
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=INFTY;
        }
    }
    int k,c,u,v;
    for(int i=0;i<n;i++){
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v>>c;
            M[u][v]=c;
        }
    }
    dijkstra();
    return 0;
}

