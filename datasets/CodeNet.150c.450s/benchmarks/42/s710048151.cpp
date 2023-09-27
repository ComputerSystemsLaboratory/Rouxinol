#include <bits/stdc++.h>
using namespace std;

typedef pair<string,int> state;

int main(){

  int n,q;
  cin >> n >> q;
  queue<state> que;


  for(int i=0; i<n; i++){
    string s;
    int t;
    cin >> s >> t;
    que.push( state(s,t) );
  }

  int time = 0;
  while(que.size()){

    state front = que.front();
    front.second -= q;
    que.pop();
    if(front.second > 0){
      que.push( front );
      time += q;
    }
    else{
      time += front.second + q;
      cout << front.first << " "<< time << endl;
    }

  }

  


}