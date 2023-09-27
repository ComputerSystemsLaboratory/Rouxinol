#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,q;
  string nm;
  int tm;
  queue<int>qt;
  queue<string>qn;
  cin>>n>>q;
  for(int i=0;i<n;i++){
    cin>>nm>>tm;
    qn.push(nm);
    qt.push(tm);
  }
  int ans=0;
  while(qn.empty()==0){
    nm=qn.front();
    tm=qt.front();
    qn.pop();
    qt.pop();
    if(tm<=q){
      ans+=tm;
      cout<<nm<<" "<<ans<<endl;
    }
    else{
      ans+=q;
      qn.push(nm);
      qt.push(tm-q);
    }
  }
}