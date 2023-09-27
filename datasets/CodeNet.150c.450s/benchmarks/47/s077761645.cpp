#include<iostream>
using namespace std;
int main(){
  int W,H,x,y,r;
    cin>>W>>H>>x>>y>>r;
  for(int i=0;i<=W;i++){
    for(int j=0;j<=H;j++){
    }
  }
      int A,B,C,D;
      A=x-r;
      B=x+r;
      C=y+r;
      D=y-r;
      if(A>=0&&B<=W&&C<=H&&D>=0){
	cout<<"Yes"<<endl;
      }
      else{
	cout<<"No"<<endl;
      }
  return 0;
}