#include <iostream>
using namespace std;
int main(){
  int n,b,f,r,v;
  cin>>n;
  int array[4][3][10]={0};
  for(;n>0;n--){
     cin>>b>>f>>r>>v;
     if(v>=0){
       array[b-1][f-1][r-1]+=v;
     }else if(v<0){
       array[b-1][f-1][r-1]-=v*(-1);
     }
  }
  for(b=0;b<=3;b++){
    for(f=0;f<=2;f++){
      for(r=0;r<=9;r++){
	cout<<" "<<array[b][f][r];
      }
	cout<<endl;
    }
    if(b!=3){
      cout<<"####################"<<endl;
    }
  }
  return 0;
}