#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int num;
  int money[]={500,100,50,10,5,1};
  int i,ans;
    
  for(;;){
    cin>>num;
    if(num==0) break;
    
    i=0;ans=0;
    num=1000-num;
    while(num!=0){
      ans += num/money[i];
      num = num%money[i];
      i++;
    }
    printf("%d\n",ans);
  }
  return 0;
}