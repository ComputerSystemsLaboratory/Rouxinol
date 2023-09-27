#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
  int w,n,i,a,b,t;
  string s;
  cin>>w>>n;
  int num[w];
  for(i=0;i<w;i++)num[i]=i+1;
  for(i=0;i<n;i++){
    cin>>s;
    a=atoi((s.substr(0,s.find(","))).c_str());
    b=atoi((s.substr(s.find(",")+1)).c_str());
    t=num[a-1],num[a-1]=num[b-1],num[b-1]=t;
  }
  for(i=0;i<w;i++) cout<<num[i]<<endl;
}