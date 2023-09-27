#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int st[60];

int solve(int n,int p){
  memset(st,0,sizeof(st));
  int t = 0;
  int all = p;
  while(true){
    if(p){
      st[t]++;
      p--;
    }
    else{
      p+=st[t];
      st[t]=0;
      if(p==all) break;
    }
    t=(t+1)%n;
  }
  return t;
}
int main(){
  int n,p;
  while(cin>>n>>p,n||p){
    cout << solve(n,p) << endl;
  }
  return 0;
}