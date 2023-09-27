#include <bits/stdc++.h>
using namespace std;

signed main(){
  priority_queue<int> pque;
  string s;cin>>s;
  while(s!="end"){
    if(s=="insert"){
      int a;cin>>a;
      pque.push(a);
    }
    else{
      cout<<pque.top()<<endl;
      pque.pop();
    }
    cin>>s;
  }
}

