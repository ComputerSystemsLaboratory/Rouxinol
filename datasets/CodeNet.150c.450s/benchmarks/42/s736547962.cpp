#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
  queue<int> qi;
  queue<string> qs;
  int n,q,t;
  string s;
  cin >> n >> q;
  for(int i=0;i<n;i++){
    cin>>s>>t;
    qs.push(s);
    qi.push(t);
  }
  t=0;
  while(qi.size()){
    if(qi.front()>q){
      qi.push(qi.front()-q);qi.pop();
      qs.push(qs.front());qs.pop();
      t+=q;
    }else {
      t+=qi.front();qi.pop();
      cout<<qs.front()<<" "<<t<<endl;qs.pop();    
    }
  }
  return 0;
}
  