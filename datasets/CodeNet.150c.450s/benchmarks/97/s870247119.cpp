#include<iostream>
#include<vector>

using namespace std;

struct DATA{
  int x;
  int y;
};

DATA MakeData(int, int);

int main(){
  int i, n, m, d;
  int top, bottom, left, right, height, width;
  DATA onedata;
  vector<DATA> data;

  while(1){
    cin >> n;
    if(n == 0) break;

    data.push_back(MakeData(0, 0));

    for(i=1; i<n; ++i){
      cin >> m >> d;

      if(d == 0) onedata = MakeData(data[m].x-1, data[m].y);
      else if(d == 1) onedata = MakeData(data[m].x, data[m].y-1);
      else if(d == 2) onedata = MakeData(data[m].x+1, data[m].y);
      else if(d == 3) onedata = MakeData(data[m].x, data[m].y+1);

      data.push_back(onedata);
    }

    left = 0;
    right = 0;
    top = 0;
    bottom = 0;

    for(i=1; i<data.size(); ++i){
      if(left > data[i].x) left = data[i].x;
      if(right < data[i].x) right = data[i].x;
      if(top < data[i].y) top = data[i].y;
      if(bottom > data[i].y) bottom = data[i].y;
    }

    width = 1 + right - left;
    height = 1 + top - bottom;

    cout << width << " " << height << endl;
    data.clear();
  }

  return 0;
}

DATA MakeData(int x, int y){
  DATA data;
  data.x = x;
  data.y = y;
  return data;
}