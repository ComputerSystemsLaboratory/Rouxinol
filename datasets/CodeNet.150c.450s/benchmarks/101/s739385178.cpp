#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int N = 100000;
int n;
// int color[N];
int group[N];
vector<int> v[N];

void setColor(int r, int c){
  queue<int> q;
  q.push(r);
  group[r] = c;

  while(!q.empty()){
    int x = q.front(); q.pop();
    for(int i=0;i<v[x].size();i++){
      int y = v[x][i];
      if(group[y] == -1){
        q.push(y);
        group[y] = c;
      }
    }
  }
}

void assignColor(){
  int id = 1;
  for(int i=0;i<n;i++) group[i] = -1;
  for(int u=0;u<n;u++){
    if(group[u] == -1) setColor(u, id++);
  }
}

int main(){
  int m;
  cin >> n >> m;
  int s, t;
  for(int i=0;i<m;i++){
    cin >> s >> t;
    v[s].push_back(t);
    v[t].push_back(s);
  }
  assignColor();

  int qn; cin >> qn;
  for(int i=0;i<qn;i++){
    cin >> s >> t;
    if(group[s] == group[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}

