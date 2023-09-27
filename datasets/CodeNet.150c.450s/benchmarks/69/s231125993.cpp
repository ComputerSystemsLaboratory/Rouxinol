#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
  int n,i;
  queue<int> a;
  cin>>i;
  while(i--){
    for(int i=0;i<10;i++){cin >> n; a.push(n);}
    stack<int> b,c;
    b.push(0); c.push(0);
    while(a.size()){
      int n = a.front();
      if(n>b.top()) b.push(n);
      else if(n>c.top()) c.push(n);
      else break;
      a.pop();
    }
    if(a.size()) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
  return 0;
}
    
  