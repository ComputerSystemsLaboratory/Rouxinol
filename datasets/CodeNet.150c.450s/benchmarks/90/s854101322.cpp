#include<iostream>
int main(){
  int l[99999],i,f;
  for(i=0;i<99999;i++) l[i]=0;
  while(std::cin>>i)l[i-1]++;
  for(i=0,f=0;i<99999;i++)
    if(f<l[i])f=l[i];
  for(i=0;i<99999;i++)
    if(l[i]==f)std::cout<<i+1<<"\n";
}