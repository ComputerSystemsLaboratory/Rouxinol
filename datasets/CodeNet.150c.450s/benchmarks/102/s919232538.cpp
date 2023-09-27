#include <iostream>
#include <stack>
#include <vector>
#include <map>

using namespace std;

void input_field(vector< vector< char > > &field, int w, int h);
int reach_tile_num(vector< vector< char > > &field);
pair< int, int> search_start(vector< vector< char > > &field);

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int main(){
  int w, h;

  while(cin >> w >> h, w&&h){
    vector< vector< char > >field(h+2, vector< char >(w+2, 0));
    
    input_field(field, w+2, h+2);
    cout << reach_tile_num(field) << endl;
  }
}


void input_field(vector< vector< char > > &field, int w, int h){
  for(int y = 0; y < field.size(); y++){
    for(int x = 0; x < field[y].size(); x++){
      //cout << x << y << endl;
      if(x == 0 || y == 0
         || x == w-1 || y == h-1){
	field[y][x] = '#';
      }else{
	cin >> field[y][x];
      }
    }
  }
  //cout << "input done" << endl;
}

int reach_tile_num(vector< vector< char > > &field){
  int sum = 0;
  pair< int, int > start, cur;
  stack< pair< int, int > > s;

  start = search_start(field);
  s.push(start);

  while(!(s.empty())){
    cur = s.top();
    s.pop();
    if(field[cur.second][cur.first] == '.'
       || field[cur.second][cur.first] == '@'){
      sum++;
      for(int i = 0; i < 4; i++){
        s.push(make_pair(cur.first+dx[i], cur.second+dy[i]));
	field[cur.second][cur.first] = '#';
      }
    }
  }
  return sum;
}

pair< int, int> search_start(vector< vector< char > > &field){
  for(int y = 0; y < field.size(); y++){
    for(int x = 0; x < field[y].size(); x++){
      if(field[y][x] == '@') return make_pair(x,y);
    }
  }
}