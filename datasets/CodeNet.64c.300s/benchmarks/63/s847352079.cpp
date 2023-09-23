#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int x,int y){
  if(y==0)return x;
  return gcd(y,x%y);
}

int lcm(int x,int y,int gcd){
  return gcd*(x/gcd)*(y/gcd);
}

int main(){
  int x,y;
  while(scanf("%d %d",&x,&y)!=EOF)
    cout<<gcd(x,y)<<" "<<lcm(x,y,gcd(x,y))<<endl;
  return 0;
}