#include<iostream>
using namespace std;
int main(){
  int n,a,b,x=0,y=0;
  while(1){
    cin>>n;
    if(n==0){
      break;
    }
    for(int i=0;i<n;i++){
      cin>>a>>b;
      if(a>b){
	x+=a+b;
      }else if(a<b){
	y+=a+b;
      }else if(a==b){
	x+=a;
	y+=b;
      }
    }
    cout<<x<<" "<<y<<endl;
    x=0;
    y=0;
  }
  return 0;
}