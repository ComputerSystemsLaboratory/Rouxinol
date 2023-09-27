#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int h,w;
void solve(){
  int length2 = h*h + w*w;
  int minHeight = 150;
  int minWidth;
  int minLength = 255000;
  for(int height = 1; height <= 150 ; height++){
    for(int width = height + 1; width <= 150 ; width++){
      int l = height * height + width * width;
      if(length2 < l || (length2 == l && h < height)){
        if( minLength > l || (minLength == l && minHeight > height) ){
          minHeight = height;
          minWidth = width;
          minLength = l;
        }
      }
    }
  }

  cout << minHeight << " " << minWidth << endl;
}

int main(){
  while(true){
    cin >> h >> w;
    if(h == 0 && w == 0) break;
    solve();
  }

  return 0;
}

