#include<bits/stdc++.h>
using namespace std;
int main(){
  int intager[100]={0};
  int num;
  while(cin>>num)
    intager[num-1]++;
  int flag=0;
  for(int i=100;i>0;i--){
    for(int j=0;j<100;j++){
      if(intager[j]==i){
	cout<<j+1<<endl;
	flag=1;
      }
    }
    if(flag==1)
      break;
  }
  return 0;
}