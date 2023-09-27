#include <iostream>

using namespace std;

int h, w;

int main(void)
{
  while(1){
    cin >> h >> w;
    if(h == 0 && w == 0) break;

    int l = h*h + w*w;
    for(int i = l; ; i++){
      for(int y = 1; y <= 150; y++){
        for(int x = 1; x <= 150; x++){
          if(x <= y) continue;
          if(x*x + y*y == i){
            if(i == l && y <= h) continue;
            cout << y << " " << x << endl;
            goto end;
          }
        }
      }
    }
    end:;
  }
  return 0;
}

