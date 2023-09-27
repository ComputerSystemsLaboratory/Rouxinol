#include<iostream>
#include<map>
using namespace std;

int main(){
  int n,a,b,c,N;
  int matrix[110][110];
  int sum[110],Min;
  map<int,bool> index;
  while(cin >> n && n){
    index.clear();
    for(int i=0;i<110;i++)for(int j=0;j<110;j++)matrix[i][j] = i==j?0:1<<20;
    for(int i=0;i<n;i++){
      cin >> a >> b >> c;
      index[a] = true;
      index[b] = true;
      matrix[a][b] = matrix[b][a] = c;
    }
    N = index.size();
    for(int k=0;k<N;k++)for(int i=0;i<N;i++)for(int j=0;j<N;j++)matrix[i][j] = min(matrix[i][j],matrix[i][k]+matrix[k][j]);
    Min=1<<22;
    for(int i=0;i<N;i++){
      sum[i]=0;
      for(int j=0;j<N;j++){
	sum[i]+=matrix[i][j];
      }
      Min = min(Min,sum[i]);
    }
    for(int i=0;i<N;i++){
      // cout << sum[i] << endl;
      if(Min == sum[i]){
	cout << i << " " << sum[i] << endl; 
	  break;
      }
    }

  }
  return 0;
}