#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  while(cin>>a>>b){
    int cnt=0,sum=a+b;
    while(1){if(sum==0) break; sum/=10,cnt++;}
    cout<<cnt<<endl;
  }
  return 0;
}