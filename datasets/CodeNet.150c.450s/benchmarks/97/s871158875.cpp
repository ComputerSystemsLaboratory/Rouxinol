#include<iostream>
using namespace std;
int main(){
  int n,a[252][4]={},b,c;
  while(cin>>n,n){
    for(int i=1;i<n;i++){
      cin>>b>>c;
      for(int j=0;j<4;j++)a[i][j]=a[b][j];
      a[i][c]++;
      a[i][(c+2)%4]--;
    }
    int max[4]={};
    for(int j=1;j<n;j++){
      for(int k=0;k<4;k++){
	if(max[k]<a[j][k])max[k]=a[j][k];
      }
    }
    cout<<max[0]+max[2]+1<<" "<<max[1]+max[3]+1<<endl;
  }
  return 0;
}