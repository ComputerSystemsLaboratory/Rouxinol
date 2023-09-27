#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main(){
  priority_queue<int>q;
  while(1){
    string s;int a;
    cin>>s;
    if(s[2]=='s'){
      cin>>a;
      q.push(a);
    }
    else if(s[2]=='t'){
      cout<<q.top()<<endl;
      q.pop();
    }
    else break;
  }
}