#include <bits/stdc++.h>
using namespace std;

int main(){
  constexpr int Ncon= 26;
  int D;
  cin >> D;

  vector<int> mass(Ncon);
  for(int i=0; i<Ncon; i++){
    cin >> mass.at(i);
  }

  vector<vector<int>> reward(Ncon);
  int buf;
  for(int d=1; d<=D; d++){
    for(int i=0; i<Ncon; i++){
      cin >> buf;
      reward.at(i).emplace_back(buf);
    }
  }
  
  vector<int> last(Ncon);

  int val= 0;
  int buf_i;
  for(int d=1; d<=D; d++){
    cin >> buf_i;
    buf_i--; // 1-indexed -> 0-indexed
    last.at(buf_i)= d;

    val+= reward.at(buf_i).at(d-1);
    for(int i=0; i<Ncon; i++){
      val-= mass.at(i)* (d- last.at(i));
    }

    cout << val << endl;
  }
}