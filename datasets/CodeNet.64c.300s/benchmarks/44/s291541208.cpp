#include <cstdio>
#include <algorithm>
#include <limits.h>
#define INF INT_MAX/100
#define FOR(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
  int n,x,y,z,ans,tmp=0,nodes=0,sum=INF;
  int graph[50][50];
  char str[100];

  while(1){
    fgets(str,sizeof(str),stdin);
    sscanf(str,"%d",&n);
    if(n==0) break;
    FOR(i,10)
      FOR(j,10)
        graph[i][j] = (i==j ? 0 : 500);
    while(n--){
      fgets(str,sizeof(str),stdin);
      sscanf(str,"%d %d %d",&x,&y,&z);
      graph[x][y] = graph[y][x] = z;
      nodes = max(max(nodes,y),x);
    }
    /*REP(i,nodes+1)
      REP(j,nodes+1)
        (j!=nodes ? printf("%3d ",graph[i][j]) : printf("%3d\n",graph[i][j]));
    printf("\n");*/
    FOR(k,nodes+1){
      FOR(i,nodes+1){
        FOR(j,nodes+1){
          graph[i][j] = min(graph[i][j],graph[i][k] + graph[k][j]);
        }
      }
      //printf("\n");
    }
    FOR(i,nodes+1){
      FOR(j,nodes+1)
          tmp += graph[i][j];
      if(sum > tmp){
        sum = tmp;
        ans = i;
      }
      tmp = 0;
    }
    printf("%d %d\n",ans,sum);
    nodes = ans = 0;
    sum = INF;
  }
  return 0;
}

/* 0  1  2  3  4
  --------------
0| 0 80 60  0  0
1|80  0 20  0 90 
2|60 20  0 50  0
3| 0  0 50  0 60
4| 0 90  0 60  0  */