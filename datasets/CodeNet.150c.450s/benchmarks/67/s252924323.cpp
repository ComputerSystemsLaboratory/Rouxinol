#include<iostream>
using namespace std;

int main(){
  int num=0;
  while(cin>>num){
    if(num>0){
      int count = 0;
      for(int i=1;i<=num;i++){
	for(int j=i+1;j<=num;j++){
	  if((double)(j-i+1)*(i+j)/2 == num) count++;
	}
      }
      cout<<count<<endl;
    }else
      break;
  }
  return 0;
}