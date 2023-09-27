#include <iostream>
#include <queue>
#include <vector>
#include <map>

using namespace std;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void input(vector< vector<char> > &m);
void delete_(vector< vector< char> > &m, int x, int y);

int main(){
  int h,w;
  while(cin >> h >> w, h&&w){
    int num = 0;
    vector< vector< char > > m(h+2, vector<char>(w+2));
    input(m);
    for(int y = 0; y < m.size(); y++){
      for(int x = 0; x < m[y].size(); x++){
	if(m[y][x] != '-'){
	  delete_(m,x,y);
	  num++;
	}
      }
    }
    cout << num << endl;
  }
}

void input(vector< vector<char> > &m){
  for(int y = 0; y < m.size(); y++){
    for(int x = 0; x < m[y].size(); x++){
      if(y == 0 || x == 0 ||
	 y == m.size()-1 || x == m[y].size()-1){
	m[y][x] = '-';
      }else{
	cin >> m[y][x];
      }
    }
  }
}

void delete_(vector< vector< char> > &m, int x, int y){
  queue< pair< int, int > > q;
  q.push(make_pair(x,y));
  pair<int , int> cur = q.front();
  char c = m[cur.second][cur.first];

  while(!(q.empty())){
    cur = q.front();
    q.pop();
    if(m[cur.second][cur.first] == c){
      m[cur.second][cur.first] = '-';
      for(int i = 0; i < 4 ;i++){
	q.push(make_pair(cur.first+dx[i], cur.second+dy[i]));
      }
    }
  }
}

  