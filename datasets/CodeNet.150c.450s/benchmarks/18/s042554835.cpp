#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n,ten=100000,ten2;
  cin>>n;
  rep(i,n){
    ten+=ten/20;
    ten2=ten/1000*1000;
    if(ten!=ten2){
      ten2+=1000;
      ten=ten2;
    }
  }
  cout<<ten<<endl;
}