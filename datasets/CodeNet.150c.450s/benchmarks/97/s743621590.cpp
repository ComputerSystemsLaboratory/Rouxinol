#include <iostream>
using namespace std;


int main() {
  
  int N;
  while (cin >> N && N) {
    
    struct point {
      int x, y;
    } block[200];
    
    
    block[0].x = 0;
    block[0].y = 0;
    
    const int dx[4]={-1,0,1,0};
    const int dy[4]={0,-1,0,1};
    
    for(int bn = 1; bn < N; bn++){
      int num, d;
      
      cin >> num >> d;

      block[bn].x = block[num].x + dx[d];
      block[bn].y = block[num].y + dy[d];
    }
    
    int r = 0, l = 0, t = 0, b = 0;
    
    for (int i = 0; i < N; i++) {
      if (r < block[i].x)
        r = block[i].x;
      if (l > block[i].x)
        l = block[i].x;
      if (t < block[i].y)
        t = block[i].y;
      if (b > block[i].y)
        b = block[i].y;
    }
    cout << r - l + 1 << " ";
    cout << t - b + 1 << endl;
  }
}