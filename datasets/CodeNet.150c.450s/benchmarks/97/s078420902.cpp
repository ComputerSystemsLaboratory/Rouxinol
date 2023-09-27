#include <iostream>

using namespace std;

typedef struct {
  int x;				       
  int y;
} Point;

int main() {
  int N;	
  int dx[] = { -1, 0 , 1 , 0} ;		
   int dy[] = { 0, -1, 0, 1 };
  while (cin >> N, N != 0) {
    Point point[200];
     point[0].x = 0;				
     point[0].y = 0;
    for (int i = 1; i < N; i++) {
      int n, d;
      cin >> n >> d;
      point[i].x = point[n].x + dx[d];
      point[i].y = point[n].y + dy[d];
    }
   
    int max_x=0;
    int max_y=0,min_x=10000,min_y=10000;
    for (int i = 0; i < N; i++) {
      max_x=max(max_x,point[i].x);
      max_y=max(max_y,point[i].y);
      min_x=min(min_x,point[i].x);
      min_y=min(min_y,point[i].y);

    }
    
    int width=max_x-min_x+1;
    int height=max_y-min_y+1;
    cout<<width<<" " <<height<<"\n";
  }

  return 0;
}