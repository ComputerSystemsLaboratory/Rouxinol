#include <iostream>
using namespace std;
int a,cou,sum,now;

void dfs(int now){
  if(now==a)cou++;
  if(now+1<=a){
    dfs(now+1);
  }
  if(now+2<=a){
    dfs(now+2);
  }
  if(now+3<=a){
    dfs(now+3);
  }
}

int main(){
  while(1){
    cin >> a;
    if(a==0)break;
    cou=0;
    now=0;
    dfs(now);
    if(cou%10!=0)cou=cou/10+1;
    else cou=cou/10;
    if(cou%365!=0)cou=cou/365+1;
    else cou=cou/365;
    cout <<cou<<endl;
  }
  return 0;
}