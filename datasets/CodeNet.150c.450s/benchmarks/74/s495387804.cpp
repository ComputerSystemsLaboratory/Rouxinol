#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  cin >>n>>m;
  int c[m];
  for(int i=0;i<m;i++){
    cin>>c[i];
  }
  int l[n+1][m];
  for(int i=0;i<=n;i++){
    for(int j=0;j<m;j++){
      if(i==0){
	l[i][j]=0;
      }else if(j==0){
	if(c[0]>i){
	  l[i][j]=i;
	}else{
	  l[i][j]=l[i-c[0]][j]+1;
	}
      }else if(c[j]>i){
	l[i][j]=l[i][j-1];
      }else{
	l[i][j]=min(l[i][j-1],l[i-c[j]][j]+1);
      }
    }
  }
  cout << l[n][m-1]<<endl;
}