#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int Y,M,D;
  int day[101]={};
  for(int i=0;i<n;i++){
    cin>>Y>>M>>D;
    for(int j=Y+1;j<1000;j++){
      if(j%3==0){
	day[i]+=20*10;
      }
      else {
	day[i]+=20*5+19*5;
      }
    }
    for(int d=M+1;d<=10;d++){
      if(Y%3==0){
	day[i]+=20;
      }
      else{
	if(d==1 || d==3 || d==5 ||d==7 || d==9){
	  day[i]+=20;
	}
	else day[i]+=19;
      }
    }
    if(Y%3!=0){
    if(M==1 || M==3 ||
       M==5 ||M==7 || M==9) day[i]+=(21-D);
    else day[i]+=(20-D);
    }
    else day[i]+=(21-D);
  }

  
  for(int i=0;i<n;i++){
    cout<<day[i]<<endl;
  }
  return 0;
}