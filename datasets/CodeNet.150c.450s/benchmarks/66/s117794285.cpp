#include<bits/stdc++.h>
using namespace std;

int n,m,flag=1;
string u;
map<string,int>mp;

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u;
    mp[u]=1;
  }
  
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>u;
    if(mp.count(u)){
      if(flag){cout<<"Opened by "<<u<<endl;flag=0;}
      else{cout<<"Closed by "<<u<<endl;flag=1;}
    }
    else cout<<"Unknown "<<u<<endl;
  }
}