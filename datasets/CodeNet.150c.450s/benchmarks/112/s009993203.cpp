#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  map<char,char> s;
  while(1){
    cin>>n;
    if(n==0) break;
    s.clear();
    for(int i=0;i<n;i++){
      char a,b;
      cin>>a>>b;
      s[a]=b;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
      char a;
      cin>>a;
      if(s.count(a)==0){
	cout<<a;
      }else{
	cout<<s[a];
      }
    }
    putchar('\n');
  }
}