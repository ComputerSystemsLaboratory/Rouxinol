//itp1_8-a
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
 char num[1001];

 while(true){
  int res=0;
  scanf("%s",num);
  if(num[0]=='0') return 0;
  for(int i=0;num[i]!='\0';i++){
   res+=num[i]-'0';
  }
  cout<<res<<endl;
 }
 return 0;
}