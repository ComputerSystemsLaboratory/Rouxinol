#include <iostream>
#include <limits.h>
#include <queue>
#include <algorithm>
#include <map>
#include <cstring>
#include <vector>
#include <sstream>
#include <utility>

using namespace std;

typedef pair<string,int> P;


int n,q;
queue<P> qu;

void solve(){

  int t=0;
  
  while(!qu.empty()){
    P proc = qu.front();
    qu.pop();
    if(proc.second<=q){
      t += proc.second;
      cout<<proc.first<<" "<<t<<endl;
    }
    else{
      t += q;
      qu.push(P(proc.first,proc.second-q));
    }
  }
}


int main(){

  string name;
  int tm;

  cin>>n>>q;
  for(int i=0;i<n;i++){
    cin >> name >> tm;
    qu.push(P(name,tm));
  }
  solve();
 
  return 0;
}