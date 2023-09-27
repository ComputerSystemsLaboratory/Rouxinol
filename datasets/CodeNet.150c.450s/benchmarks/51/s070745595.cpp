#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<climits>
using namespace std;

bool ans[35];
void init(){
  for(int i=0;i<35;i++){
    ans[i]=false;
  }
}

bool input(){
  int tmp;
  for(int i=0;i<28;i++){
    cin>>tmp;
    ans[tmp]=true;
  }
  return true;
}



pair<int,int> solve(){
  pair<int,int> res;
  bool c=true;
  for(int i=1;i<31;i++){
    if(ans[i]==false){
      if(c){
        res.first=i;
        c=false;
      }else{
        res.second=i;
        break;
      }
    }
  }
  return res;
}


int main(){
  init(),input();
  pair<int,int> ans=solve();
  cout<<ans.first<<endl<<ans.second<<endl;  
}