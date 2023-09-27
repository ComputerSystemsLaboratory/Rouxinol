#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

set<string> users;

int main(){ _;
  int n,m;
  string user;
  bool opened=false;
  cin>>n;
  REP(i,n){
    cin>>user;
    users.insert(user);
  }
  cin>>m;
  REP(i,m){
    cin>>user;
    if(users.count(user)==1){
      if((opened=!opened)){
	cout<<"Opened by "<<user<<endl;
      }else{
	cout<<"Closed by "<<user<<endl;
      }
    }else{
      cout<<"Unknown "<<user<<endl;
    }
  }
}