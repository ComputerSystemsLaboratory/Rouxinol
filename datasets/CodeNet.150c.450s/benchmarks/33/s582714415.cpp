#include<iostream>
using namespace std;

int main(){
  while(1){
  int x,y,s,mo,mo1,mo2,max=0;
  cin>>x>>y>>s;
  if(x+y+s==0) break;
  for(int i=1;i<s-1;i++){
    for(int j=1;j<=s-1;j++){
      mo1=i*(100+x)/100;
      mo2=j*(100+x)/100;
      if(mo1+mo2==s){
	mo1=i*(100+y)/100;
	mo2=j*(100+y)/100;
	mo=mo1+mo2;
	if(max<mo) max=mo;
      }
    }
  }
  cout<<max<<endl;
  }
  return 0;
}