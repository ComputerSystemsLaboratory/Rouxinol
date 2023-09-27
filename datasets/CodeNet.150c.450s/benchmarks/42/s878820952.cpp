#include <iostream>
#include <queue>
#include <string>
#include <cstdio>
using namespace std;

int main(){
  int a,b,d,cou,c;
  queue<int> t;
  queue<string> n;
  string g;
  char h;
  cin>>a>>b;
  for(int i=0;i<a;i++){
    cin>>g>>d;
    n.push(g);
    t.push(d);
  }
  cou=0;
  while(!t.empty()){
    g=n.front();n.pop();
    d=t.front();t.pop();
    if(d>b){
      n.push(g);
      t.push(d-b);
      cou+=b;
    }else {
      cou+=d;
      cout<<g<<" "<<cou<<endl;
    }
  }
  return 0;
}
    