#include<iostream>
#include<cstdio>
using namespace std;
int main(){

  int n,b,f,r,v;

  int count[5][4][11]={0};

  cin>>n;

  for(int i=0;i<n;i++){
    cin>>b>>f>>r>>v;
    count[b][f][r]+=v;
  }
  for(int i=1;i<5;i++){
    for(int j=1;j<4;j++){
      for(int k=1;k<11;k++){
	cout<<" "<<count[i][j][k];
      }
      cout<<endl;   
    }
    if(i==4)break;
    cout<<"####################"<<endl; 
  }
  return 0;
}