#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calc_area(int map[],int start_point, int end_point){
  int base = 0;
  double sum = 0;
  for(int i=start_point+1;i<=end_point;i++){
    sum += base;
    if(map[i] < map[i-1]){
      sum += 0.5;
      base++;
    }else if(map[i] == map[i-1]){
      ;
    }else if(map[i] > map[i-1]){
      sum -= 0.5;
      base--;
    }
  }
  return (int)sum;
}

int main(){
  string input;
  cin>>input;
  int map_size = input.length() + 1;
  int map[map_size];
  vector<int> area;
  int total_area = 0;
  
  map[0] = 0;
  for(int i=0;i<input.length();i++){
    switch(input[i]){
      case '\\':
        map[i+1] = map[i] - 1;
        break;
      case '_':
        map[i+1] = map[i];
        break;
      case '/':
        map[i+1] = map[i] + 1;
        break;
    }
  }
  int start_level = 0;
  bool down;
  for(int i=0;i<map_size-1;i++){
    start_level = map[i];
    down = false;
    for(int j=i+1;j<map_size;j++){
      if(start_level > map[j]){
        down = true;
        continue;
      }
      if(start_level <= map[j]){
        if(down){
          int a = calc_area(map,i,j);
          total_area += a;
          area.push_back(a);
          i = j-1;
          break;
        }else{
          break;
        }       
      }
    }
  }
  cout<<total_area<<endl;

  cout<<area.size();
  for(auto itr = area.begin(); itr != area.end(); ++itr) {
    cout<<" "<<*itr;
  }
  cout<<endl;
}