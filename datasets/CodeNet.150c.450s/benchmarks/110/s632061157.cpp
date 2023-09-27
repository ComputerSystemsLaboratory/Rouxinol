#include<cmath>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#define debug(ARGS) cout << #ARGS << ": " << ARGS << endl;
#define ll long long

#define INF (int)1e7
#define p pair<int, int>
#define F 0
#define X -1
#define S -2

using namespace std;

int convert(char c){
  int ret;

  if('1' <= c && c <= '9') ret = c - '1' + 1;
  else if(c == '.') ret = F;
  else if(c == 'X') ret = X;
  else if(c == 'S') ret = S;
  else ret = -3;

  return ret;
}

p find_nest(vector< vector<int> > &v, int num){
  int h = v.size(), w = v[0].size();
  p ret;
  
  for(int i = 0; i < h; i++)
    for(int j = 0; j < w; j++)
      if(v[i][j] == num) ret = p(i, j);

  return ret;
}

int count_minite(vector< vector<int> > v, int start, int end){
  int h = v.size(), w = v[0].size();
  int ret = -1;
  // vector< vector<bool> > m; m.resize(h); for(int i = 0; i < h; i++) m[i].resize(w, false);
  queue< pair< p, int> > q;
  q.push(pair< p, int>(find_nest(v, start), 0));

  while(!q.empty()){
    p here = q.front().first; 
    ret = q.front().second;
    q.pop();
    int y = here.first, x = here.second;
    
    if(v[y][x] == end) break;
    else if(v[y][x] == X) continue;

    v[y][x] = X;
    
    if(x > 0 && v[y][x-1] != X) q.push(pair< p, int>(p(y, x-1), ret+1));
    if(x < w - 1 && v[y][x+1] != X) q.push(pair< p, int>(p(y, x+1), ret+1));
    if(y > 0 && v[y-1][x] != X) q.push(pair< p, int>(p(y-1, x), ret+1));
    if(y < h - 1 && v[y+1][x] != X) q.push(pair< p, int>(p(y+1, x), ret+1));
  }
  
  return ret;
}

int main(){
  int h, w, n;
  cin >> h; cin >> w; cin >> n;
  vector< vector<int> > v;  
  v.resize(h); for(int i = 0; i < h; i++)  v[i].resize(w);
  int count = 0;

  for(int i = 0; i < h; i++)
    for(int j = 0; j < w; j++){
      char c; cin >> c;
      v[i][j] = convert(c);
    }

  int start = S;  
  for(int i = 1; i <= n; i++){
    count += count_minite(v, start, i);
    start = i;
  }

  cout << count << endl;
  
  return 0;
}