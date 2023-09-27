#include <iostream>
#include <queue>
using namespace std;

int main(){
  int n,k,a,s,m;
  while(cin>>n>>k,n||k){
    a=0;
    queue<int> q;
    n-=k;
    while(k--){
      cin>>s;
      a+=s;q.push(s);
    }
    m=a;
    while(n--){
      cin>>s;
      q.push(s);
      a=a+s-q.front();
      q.pop();
      m=max(m,a);
    }
    cout<<m<<endl;
  }
  return 0;
}