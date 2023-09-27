//Kagisys
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
  vector<string> u;
  int N, M;
  cin>>N;
  rep(i,N){
    string tmp;
    cin>>tmp;
    u.push_back(tmp);
  }
  cin>>M;
  bool open=false;
  rep(i,M){
    string t;
    cin>>t;
    bool known=false;
    rep(j,N)if(u[j]==t){known=true; break;}
    if(!known)cout<<"Unknown "<<t<<endl;
    else if(open){cout<<"Closed by "<<t<<endl; open=false;}
    else{cout<<"Opened by "<<t<<endl; open=true;}
  }
  return 0;
}