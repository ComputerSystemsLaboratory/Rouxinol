#include <iostream>
using namespace std;

int main(){
  int n,b[200],bb[200][200],a,c,min;
  cin>>n;
  for(int i=1;i<n;i++){
    cin>>a>>c;
    b[i]=a;
  }
  cin>>a>>c;
  b[n]=a;
  b[n+1]=c;
  for(int i=1;i<=n;i++){
    bb[i][i]=0;
    if(i<n)bb[i+1][i]=b[i]*b[i+1]*b[i+2];
  }
  for(int i=2;i<=n-1;i++){
    for(int j=1;j<=n-i;j++){
      min=1000000000;
      for(int l=j;l<j+i;l++){
	if(min>bb[l][j]+bb[j+i][l+1]+b[j]*b[l+1]*b[j+i+1])
	  min=bb[l][j]+bb[j+i][l+1]+b[j]*b[l+1]*b[j+i+1];
      }
      bb[j+i][j]=min;
    }
  }

  cout<<bb[n][1]<<endl;
  return 0;
}

/*
for(int i=0;i<=n;i++){
for(int j=0;j<=n;j++){
cout<<bb[i][j]<<" ";
}
}

*/