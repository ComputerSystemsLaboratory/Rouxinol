#include <iostream>
using namespace std;

int main(){
  int h, w;

  while(1){
    cin >> h >> w;
    if(h == 0 && w == 0) break;

    int area = h * h + w * w;
    int minh = 200, minw = 200, mina = 100000000;
    for(int i = 1 ; i <= 150 ; i++){
      for(int j = i+1 ; j <= 150 ; j++){
	int newarea = i * i + j * j;
	if(area > newarea || (area == newarea && i <= h)) continue;
	if(newarea < mina || (newarea == mina && i < minh)){
	  minh = i;
	  minw = j;
	  mina = newarea;
	}
      }
    }
    cout << minh << " " << minw << endl;
    
  }
}