#include<iostream>
#include<cstdio>
using namespace std;
int main(){

  int cards[4][14]={0};

  int n;
 
  cin>>n;

  int a,r;

  char c;

  
  for(int i=0;i<n;i++){
    cin>>c>>r;

    if(c=='S')a=0;
    if(c=='H')a=1;
    if(c=='C')a=2;
    if(c=='D')a=3;

    cards[a][r]=1;
  
  }
  char egara[4]={'S','H','C','D'};


  for(int i=0;i<4;i++){
    for(int j=1;j<14;j++){

      if(cards[i][j]==0){
	cout<<egara[i]<<" "<<j<<endl;
      }
    }
  }



  return 0;
}