//51
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  bool sub[31]={};
  for(int i=0;i<28;i++){
    int n;
    cin>>n;
    sub[n]=true;
  }
  int f=0;
  f=find(sub+f+1,sub+31,false)-sub;
  cout<<f<<endl;
  f=find(sub+f+1,sub+31,false)-sub;
  cout<<f<<endl;
  return 0;
}