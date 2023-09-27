#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


int main() {
  while (true) {
    int N;
    
    cin >> N;
    if (N == 0)
      break;

    int gems_pos[21][2];
    for (int i=0; i<N; i++) {
      cin >> gems_pos[i][0];
      cin >> gems_pos[i][1];
    }

    int M;
    cin >> M;
    int count = 0;
    int x = 10;
    int y = 10;
    
    for (int i=0; i<M; i++) {
      char c;
      int diff;

      cin >> c;
      cin >> diff;

      int des_x = x;
      int des_y = y; 
      
      switch (c) {
      case 'N':
	des_y += diff;
	break;
      case 'S':
	des_y -= diff;
	break;
      case 'E':
	des_x += diff;
	break;
      case 'W':
	des_x -= diff;
	break;
      }

      // debug
      // printf("x:%d y:%d\n", des_x, des_y);
      
      for (int i=0; i<N; i++) {
	if (((x <= gems_pos[i][0] && gems_pos[i][0] <= des_x) ||
	    (des_x <= gems_pos[i][0] && gems_pos[i][0] <= x))
	    &&
	    ((y <= gems_pos[i][1] && gems_pos[i][1] <= des_y) ||
	    (des_y <= gems_pos[i][1] && gems_pos[i][1] <= y)))  {
	  count++;
	  // printf("found\n");
	  gems_pos[i][0] = -1;
	}
      }

      x = des_x;
      y = des_y;
    }

    if (count == N) {
      puts("Yes");
    } else {
      puts("No");
    }
  }
  
}