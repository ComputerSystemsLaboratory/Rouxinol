#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(1){
    cin>>n;
    if(n==0){
      break;
    }
    int leg[2]={0};
    int cnt=0,last=0;
    string s;
    for(int i=0;i<n;i++){
      cin>>s;
      if(s=="lu"){
	leg[0]=1;
      }else if(s=="ru"){
	leg[1]=1;
      }else if(s=="ld"){
	leg[0]=0;
      }else{
	leg[1]=0;
      }
      if(leg[0]==1&&leg[1]==1){
	if(last==0){
	  cnt++;
	  last=1;
	}
      }else if(leg[0]==0&&leg[1]==0){
	if(last==1){
	  cnt++;
	  last=0;
	}
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}

