#include <iostream>
#include <algorithm>
#define INFINITY 2000000000
#define N 101
using namespace std;
void warshallFloyd();
int v,A[N][N];
int main(){
  int e,s,t,d,i,j;
  cin >> v >> e;
  for(i=0;i<v;i++){
    for(j=0;j<v;j++){
      if(i!=j) A[i][j]=INFINITY;
      else A[i][j]=0;
    }
  }
  for(i=0;i<e;i++){
    cin >> s >> t >> d;
    A[s][t]=d;
  }
  warshallFloyd();
  return 0;
}
void warshallFloyd(){
  int i,j,k,flag;
  for(k=0;k<v;k++){
    for(i=0;i<v;i++){
      for(j=0;j<v;j++){
	if(A[i][k]!=INFINITY&&A[k][j]!=INFINITY)A[i][j]=min(A[i][j],A[i][k]+A[k][j]);
      }
    }
  }
  flag=0;
  for(i=0;i<v;i++){
    if(A[i][i]<0){
      flag=1;
      break;
    }
  }
  if(flag==1) cout << "NEGATIVE CYCLE" << endl;
  else{
    for(i=0;i<v;i++){
      for(j=0;j<v;j++){
	if(A[i][j]!=INFINITY) cout << A[i][j];
	else cout << "INF";
	if(j!=v-1) cout << ' ';
      }
      cout << endl;
    }
  }
}