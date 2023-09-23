#include <iostream>
using namespace std;

int main(void){
  while(true){
    int n;
    cin >> n;
    if(n == 0)
      break;

    int plane[21][21] = {0};
    for(int i=0; i<n; i++){
      int x, y;
      cin >> x >> y;
      plane[x][y] = 1;
    }

    int m;
    cin >> m;
    int x = 10, y = 10;
    for(int i=0; i<m; i++){
      char d;
      int l;
      cin >> d >> l;

      int dx = 0, dy = 0;
      if(d == 'N')
        dy = 1;
      else if(d == 'S')
        dy = -1;
      else if(d == 'E')
        dx = 1;
      else
        dx = -1;

      for(int j=0; j<l; j++){
        x += dx;
        y += dy;
        if(plane[x][y] == 1){
          n--;
          plane[x][y] = 0;
        }
      }
    }

    if(n == 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  
  return 0;
}