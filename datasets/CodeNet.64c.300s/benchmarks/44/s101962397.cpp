#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
int main(){
  int MATHI[10][10];
  int n,a,b,c,syo;
  while(1){
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++) MATHI[i][j]=1000000;
      MATHI[i][i]=0;
    }
    syo=0;
    cin >> n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin >> a >> b >> c;
      MATHI[a][b]=MATHI[b][a]=c;
      syo=max(syo,max(a,b));
    }
    for(int i=0;i<=syo;i++){
      for(int j=0;j<=syo;j++){
	for(int k=0;k<=syo;k++){
	  MATHI[j][k]=min(MATHI[j][k],MATHI[j][i]+MATHI[i][k]);
	}
      }
    }
    int no,h=1000000;
    for(int i=0;i<=syo;i++){
      int sum=0;
      for(int j=0;j<=syo;j++){
	sum+=MATHI[i][j];
      }
      if(h>sum){
	h=sum;
	no=i;
      }
    }
    cout << no << " " << h << endl;
  }
}