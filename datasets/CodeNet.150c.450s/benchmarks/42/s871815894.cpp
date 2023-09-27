#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,q,y,t=0;
  string x;
  cin >> n >> q;
  queue<pair<string,int> > a;
  pair<string,int> b;
  for(int i=0;i<n;i++){
    cin >> b.first >> b.second;
    a.push(b);
  }
  while(! a.empty()){
    b=a.front();
    if(b.second<=q){
      t+=b.second;
      cout << b.first << ' ' << t  << endl;
      a.pop();
    }
    else{
      b.second=b.second-q;
      a.pop();
      a.push(b);
      t+=q;
}
  }
}
    
  
