#include<iostream>
using namespace std;

int main(){
  int n;
  int x;
  int ushi;
  int uma;
  int yagi;
  int shika;
  while(true){
    cin>>n>>x;
    if(n==0&&x==0){
      break;
    }else{
      for(int ushi=1;ushi<n+1;ushi++){
    for(int uma=ushi;uma<n+1;uma++){
      for(int yagi=uma;yagi<n+1;yagi++){
	if(ushi==uma||uma==yagi||yagi==ushi){
	  ushi=ushi;
	}else if(ushi+uma+yagi==x){
	  shika++;}
      }
    }
      }
    cout<<shika<<endl;
    shika=0;
    }
  }
}