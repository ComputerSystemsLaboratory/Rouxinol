#include<iostream>
using namespace std;

int main(){
 int n,i,j;
 char a;
 int cards[4][14]={};
 cin >> n;
 for(int k=1;k<=n;++k){
  cin >> a >> j;
  if(a=='S') i=0;
  else if(a=='H') i=1;
  else if(a=='C') i=2;
  else i=3;

  cards[i][j]=1;
 }
 for(i=0;i<=3;++i){
  for(j=1;j<=13;++j){
   if(cards[i][j]==0){
    if(i==0) cout << "S " << j << endl;
    else if(i==1) cout << "H " << j << endl;
    else if(i==2) cout << "C " << j << endl;
    else cout << "D " << j << endl;
   }
  }
 }
 return 0;
}