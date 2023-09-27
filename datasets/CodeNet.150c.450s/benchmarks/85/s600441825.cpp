#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

int m[105][105];
int plen;
//function matrix chain order
void matrixco(int p[]){
  int n,j,q;
  n=plen-1;
  for(int i=1;i<=n;i++){
    m[i][i]=0;
  }

  for(int l=2;l<=n;l++){
    for(int i=0;i<=n-l+1;i++){
      j=i+l-1; 
      m[i][j]=INT_MAX;   
      for(int k=i;k<=j-1;k++){
	q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
	if(q<m[i][j]){
	  m[i][j]=q;
	}
      }
    }
  }
}

int main(){
  int n;
  int p[105];
  int r,c;
  //load n
  cin >>n;

  plen=n+1;

  for(int i=0;i<n;i++){
    //load r,c
    scanf("%d %d",&r,&c);

    if(i!=n-1) p[i]=r;
    else{
      p[i]=r;
      p[i+1]=c;
    }
  }

  matrixco(p);

  cout <<m[1][n]<<endl;
  return 0;
}