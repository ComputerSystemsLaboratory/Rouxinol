#include <iostream>
#include <queue>
using namespace std;
int main(){
  int n,t,p,c=0;
  string s;
  cin>>n>>t;
  queue<pair<string,int> >a;
  while(n--){
    cin>>s>>p;
    a.push(make_pair(s,p));
  }
  while(!a.empty()){
    pair<string,int>b=a.front();
    a.pop();
    if(b.second<=t){
      c+=b.second;
      cout<<b.first<<' '<<c<<endl;
    }
    else{
      b.second-=t;
      c+=t;
      a.push(b);
    }
  }
}