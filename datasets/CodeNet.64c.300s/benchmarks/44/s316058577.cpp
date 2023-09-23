#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;
typedef pair<int,int> P;

#define INF 1000000
int cost[10][10];
int n,m;

int main(){
  while(1){
    cin >> n;
    if(!n)break;

    m = 0;
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        if(i==j){
          cost[i][j] = 0;
        }else{
          cost[i][j] = INF;
        }
      }
    }
    for(int i=0;i<n;i++){
      int x,y,z;
      scanf("%d%d%d",&x,&y,&z);
      if(m<x||m<y){
        m = max(x,y);
      }
      cost[x][y] = z;
      cost[y][x] = z;
    }
    m++;

    for(int k=0;k<m;k++){
      for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
        }
      }
    }

    int mini = INF;
    int index;
    for(int i=0;i<m;i++){
      int sum = 0;
      for(int j=0;j<m;j++){
        sum += cost[i][j];
      }
      if(mini>sum){
        mini = sum;
        index = i;
      }
    }
    cout << index << " " << mini << endl;
  }
}