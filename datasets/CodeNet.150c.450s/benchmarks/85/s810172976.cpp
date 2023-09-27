#include <iostream>
using namespace std;
#define INF 200000000

int n,m[101],cm[101][101];

void calc(){
  int i,j,l,p,k;
  for (i=0;i<n;i++)cm[i][i]=0;
  for (l=1;l<n;l++){
    for(i=0;i<n-l;i++){
      j=i+l;
      cm[i][j]=INF;
      //cout << i << " "<< j << endl;
      for (k=i;k<j;k++){
	//cout << i << " "<< j <<" "<< k<<" "<<cm[i][k]<<" "<<cm[k+1][j] <<  endl;
	p=cm[i][k]+cm[k+1][j]+m[i]*m[k+1]*m[j+1];
	cm[i][j]=min(cm[i][j],p);
      }
    }
  }
}

int main(){
  cin >> n;
  for (int i=0;i<n;i++) cin >> m[i]>>m[i+1];

  calc();

  cout << cm[0][n-1]<<endl;
  
  return 0;
}