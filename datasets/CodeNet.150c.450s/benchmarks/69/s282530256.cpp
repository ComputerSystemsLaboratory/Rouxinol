#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int>a;
  stack<int>b;
  int n,m,s;
  cin>>n;
  for(int i=0;i<n;i++){
    s=0;
    a.push(0);
    b.push(0);
    for(int i=0;i<10;i++){
      cin>>m;
      if(m>a.top()){
	a.push(m);
      }
      else if(m>b.top()){
	b.push(m);
      }
      else s=1;
    }
    if(s==0)cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
  }
  return 0;
}