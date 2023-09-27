#include <iostream>
#include <vector>

using namespace std;


int read_map(vector< vector <int> >& map,int &w, int &h){
  cin >> w >>  h;
  if (w == 0 && h == 0){
    return 0;
  }
  map.reserve(h);
  for (int i = 0; i < h ; ++i) map[i].resize(w);
  for (int i = 0; i < h; ++i)
  {
    for (int j = 0; j < w; ++j)
    {
      cin >> map[i][j];
    }
  }
  return 1;
}


bool island_check(vector<vector<int> >& map, int i, int j){
  if (map[i][j] == 1){
    return true;
  }
  return false;
}

void walk_island(vector<vector<int> >& map, int i, int j, int w, int h){
  int start_i, start_j;
  start_i = i;
  start_j = j;
  while (++j < w){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
  i = start_i;
  j = start_j;
  while (--j >= 0){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
  i = start_i;
  j = start_j;
  while (++i < h){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
  i = start_i;
  j = start_j;
  while (--i >= 0){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
  i = start_i;
  j = start_j;
  while (++i < h && ++j < w){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
  i = start_i;
  j = start_j;
  while (--i >= 0 && ++j < w){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
  i = start_i;
  j = start_j;
  while (--i >= 0 && --j >= 0){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
  i = start_i;
  j = start_j;
  while (++i < h && --j >= 0){
    if (island_check(map, i, j))
    {
      map[i][j] = 2;
      walk_island(map, i, j, w, h);
    }else{
      break;
    }
  }
}

int search_island_num(vector< vector <int> >& map, int w, int h){
  int island_count = 0;
  for (int i = 0; i < h; ++i)
  {
    for (int j = 0; j < w; ++j)
    {
      if(map[i][j] == 1){
        island_count++ ;
        map[i][j] = 2;
        walk_island(map, i, j, w, h);
      }
    }
  }
  return island_count;
}

int main(){
  vector< vector<int> > map;
  int w, h;
  while (read_map(map, w, h) != 0) {
    cout << search_island_num(map, w, h) << endl;
    map.clear();
  }
}