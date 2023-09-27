#include<iostream>
using namespace std;

int cc(int x,int y){
  return x*(100+y)/100;
}

int cul(int x,int y,int z){
  return cc(x,z)+cc(y,z);
}

int solve(int x,int y,int z){
  int ans = 0;
  for(int i=1;i<1000;i++){
    for(int j=1;j<1000;j++){
      if(cc(i,x)+cc(j,x)==z){
        ans = max(ans,cul(i,j,y));
      }
    }
  }
  return ans;
}

int main(){
  int x,y,z;
  while(cin>>x>>y>>z,!(x==0&&y==0&&z==0)){
    cout<<solve(x,y,z)<<endl;
  }
}