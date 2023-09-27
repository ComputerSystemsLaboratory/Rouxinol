#include <iostream>
using namespace std;
#define INF 10000000

int main(){
  long n;
  long G[100][100],d[100];
  long minc,mi,i;
  bool flg[100];
  long sum=0;
  
  cin >> n;
  for (i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cin >> G[i][j];
      if (G[i][j]==-1) G[i][j]=INF;
    }
    d[i]=INF;
    flg[i]=false;
  }

  d[0]=0;
  while (true){
    minc=INF;
    for (i=0;i<n;i++){
      if (!flg[i]&&d[i]<minc){
	minc=d[i];
	mi=i;
      }
    }
    if (minc==INF) break;
    flg[mi]=true;
    for (i=0;i<n;i++){
      if (G[mi][i]==INF)continue;
      if (!flg[i]&&d[i]>G[mi][i]){
	d[i]=G[mi][i];
	//cout << d[i];
      }
    }
  }
  
  for (i=0;i<n;i++){
    sum+=d[i];
  }
  cout << sum<<endl;
  
  return 0;
}