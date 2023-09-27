#include<iostream>
#include<algorithm>
using namespace std;
int t[101],n,maxm;
int main(){
  for(int i=0;i<101;i++)t[i]=0;
  maxm=0;
  while(cin>>n){
    t[n]++;
    maxm=max(maxm,t[n]);
  }
  for(int i=1;i<=100;i++){
    if(maxm==t[i])cout<<i<<endl;
  }
  return 0;
}
