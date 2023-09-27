#include <iostream>
#include <queue>
using namespace std;

int main(){
  int n,k,a,s;
  while(cin>>n>>k,n||k){
    int m=-10001;a=0;
    queue<int> q;
    n-=k;
    while(k--){
      cin>>s;
      a+=s;q.push(s);
    }
    m=max(m,a);
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