#include<iostream>
using namespace std;

int main(){
  int n,count;
  char ch[201];

  while(cin>>n){
    if(n==0)break;
    n=2*n;
    count=0;
    for(int i=0;i<n;i++)
      cin>>ch[i];

    for(int i=0;i+3<n;i+=4)
      if(ch[i]!=ch[i+2])count++;
    cout<<count<<endl;
  }
  return 0;
}