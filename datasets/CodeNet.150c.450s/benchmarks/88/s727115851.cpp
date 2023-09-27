#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

struct Rectangle{
  int H, W, D;
  Rectangle(int h, int w, int d){
    H = h, W = w, D = d;
  }
};

bool compare(Rectangle a, Rectangle b){
  if(a.D == b.D) return a.H < b.H;
  return a.D < b.D;
}

int main(){
  vector<Rectangle> R;
  for(int i = 1 ; i <= 150 ; i++){
    for(int j = i+1 ; j <= 150 ; j++){
      R.push_back(Rectangle(i, j, i*i+j*j));
    }
  }
  sort(R.begin(), R.end(), compare);
  
  int H, W;
  while(cin >> H >> W, H|W){
    int D = H*H+W*W;
    for(int i = 0 ; i < (int)R.size() ; i++){
      if(R[i].D == D){
	if(R[i].H > H){
	  cout << R[i].H << ' ' << R[i].W << endl;      
	  break;
	}
      }
      
      else if(R[i].D > D){
	cout << R[i].H << ' ' << R[i].W  << endl;
	break;
      } 
    }
  }
  return 0;
}