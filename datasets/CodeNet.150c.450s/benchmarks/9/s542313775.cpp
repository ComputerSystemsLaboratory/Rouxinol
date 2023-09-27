#include <iostream>
#include <queue>
using namespace std;
int main(){
  string s;
  while(cin>>s,s[0]!='-'){
    int n,i,b;
    queue<char>a;
    for(i=0;i<s.size();i++)a.push(s[i]);
    cin>>n;
    while(n--){
      cin>>b;
      while(b--){
	a.push(a.front());
	a.pop();
      }
    }
    while(!a.empty()){
      cout<<a.front();
      a.pop();
    }
    cout<<endl;
  }
}