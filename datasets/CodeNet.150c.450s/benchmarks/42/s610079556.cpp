#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;
  queue<pair<string, int>> a;
  for(int i = 0; i < n; i++){
    string name; cin >> name;
    int time; cin >> time;
    a.push(make_pair(name, time));
  }
  int temp = 0;
  while(!a.empty()){
    pair<string, int> proc = a.front(); a.pop();
    if(proc.second <= q){
      temp += proc.second;
      cout << proc.first << ' ' << temp << endl;
    }
    else{
      temp += q;
      a.push(make_pair(proc.first, proc.second - q));
    }
  }
}

