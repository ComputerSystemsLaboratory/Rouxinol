#include<iostream>
using namespace std;
int n,num;
void dfs(int sum,int dept){
  if(dept==4){
    if(sum==n)
      num++;
    return;
  }
  for(int i=0;i<=9;i++)
    dfs(sum+i,dept+1);
}
int main(){
  while(cin>>n){
    num=0;
    for(int i=0;i<=9;i++)
      dfs(i,1);
    cout<<num<<endl;
  }
  return 0;
}