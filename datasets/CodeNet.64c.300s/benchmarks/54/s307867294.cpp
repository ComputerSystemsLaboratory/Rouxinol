//54
#include<iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  long long a[101][21]={{}};
  int f;
  cin>>f;
  a[1][f]=1;
  for(int i=1;i<n-1;i++){
    int m;
    cin>>m;
    for(int j=0;j<=20;j++){
      for(int k=0;k<2;k++){
	int f[]={-1,1};
	int r=j+f[k]*m;
	if(0<=r&&r<=20){
	  a[i+1][r]+=a[i][j];
	}
      }
    }
  }
  int ans;
  cin>>ans;
  cout<<a[n-1][ans]<<endl;
  return 0;
}