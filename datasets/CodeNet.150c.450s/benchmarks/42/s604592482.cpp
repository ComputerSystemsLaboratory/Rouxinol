#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n,q,t;
  string name;
  queue< pair<string,int> > Q;

  cin >> n;
  cin >> q;
  for(int i=0;i<n;i++){
    cin >> name >> t;
    Q.push(make_pair(name, t));
  }

  pair<string,int> p;
  int T=0;
  while(!Q.empty()){
    p = Q.front();
    Q.pop();
    if(p.second > q){
      T += q;
      p.second -=q;
      Q.push(p);
    } else {
      T += p.second;
      cout << p.first << " " << T << endl;
    }
  }
  
  return 0;
}