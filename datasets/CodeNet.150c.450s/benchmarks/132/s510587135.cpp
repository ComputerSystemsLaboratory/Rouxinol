#include<iostream>
#include<map>
using namespace std;

int main(){
  int n,p;
  while(cin>>n>>p,n){
    int man[n];
    for(int i=0;i<n;i++){
      man[i]=0;
    }
    int cnt=0;
    int stone=p;
    while(man[cnt]!=p){
      if(stone!=0){
	man[cnt]++;
	stone--;
      }else{
	stone=man[cnt];
	man[cnt]=0;
      }
      if(cnt==n-1)cnt=0;
      else cnt++;
    }
    cout<<cnt<<endl;
  }
  return 0;
}