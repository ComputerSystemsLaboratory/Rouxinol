#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,r;
  stack<int> sp;
  stack<int> cp;
  list<int> m;
  while(cin>>n>>r,n|r){
    for(int i=1;i<=n;i++){
      m.push_back(i);
    }
    int p,c;
    while(r--){
      cin>>p>>c;
      for(int i=0;i<p-1;i++){
       	sp.push(m.back());
	m.pop_back();
      }
      for(int i=0;i<c;i++){
	cp.push(m.back());
	m.pop_back();
      }
      for(int i=0;i<p-1;i++){
       	m.push_back(sp.top());
	sp.pop();
      }
      for(int i=0;i<c;i++){
       	m.push_back(cp.top());
	cp.pop();
      }
    }
    cout<<m.back()<<endl;
  }
}