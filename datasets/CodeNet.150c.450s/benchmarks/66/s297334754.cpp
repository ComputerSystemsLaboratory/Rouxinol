#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, M;
  set<string> system;
  bool open = false;
  cin >> N;
  for(int i = 0; i < N; i++){
    string id;
    cin >> id;
    system.insert(id);
  }
  cin >> M;
  for(int i = 0; i < M; i++){
    string id;
    cin >> id;
    if(system.count(id)){
      if(open) cout << "Closed by " << id << endl;
      else cout << "Opened by " << id << endl;
      open = !open;
    } else {
      cout << "Unknown " << id << endl;
    }
  }
  return 0;
}