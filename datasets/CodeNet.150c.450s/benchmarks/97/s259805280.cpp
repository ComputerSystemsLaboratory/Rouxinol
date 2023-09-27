#include <iostream>
#include <algorithm>
using namespace std;

struct point{
  int x;
  int y;
};


int N, maxx = -200, maxy = -200, minx = 200, miny = 200, n, d;
struct point map[200];

int main()
{
  map[0].x = 0; map[0].y = 0; 
  while(1){
    cin >> N;
    if(N == 0){
      break;
    }else{
      for(int i = 1; i < N; i++){
	cin >> n >> d;
	if(d == 0){
	  map[i].x = map[n].x - 1;
	  map[i].y = map[n].y;
	}else if(d == 1){
	  map[i].y = map[n].y - 1;
	  map[i].x = map[n].x;
	}else if(d == 2){
	  map[i].x = map[n].x + 1;
	  map[i].y = map[n].y;
	}else if(d == 3){
	  map[i].y = map[n].y + 1;
	  map[i].x = map[n].x;
	}
      }
      for(int i = 0; i < N; i++){
	maxx = maxx <= map[i].x ? map[i].x : maxx;
	miny = miny >= map[i].y ? map[i].y : miny;
	maxy = maxy <= map[i].y ? map[i].y : maxy;
	minx = minx >= map[i].x ? map[i].x : minx;
      }
      cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
      maxx = -200; maxy = -200; minx = 200; miny = 200;
    }
  }
}