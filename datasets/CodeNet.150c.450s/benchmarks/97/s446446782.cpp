#include<iostream>
using namespace std;

int main(){
  int N,n,d;
  int x[222],y[222];
  const int dy[] = {0,1,0,-1}, dx[] = {-1,0,1,0};

  while(cin >> N, N){
    x[0] = 0; y[0] = 0;
    int minx = 0, miny = 0;
    int maxx = 0, maxy = 0;

    for(int i=1;i<N;i++){
      cin >> n >> d;
      x[i] = x[n]+dx[d]; y[i] = y[n]+dy[d];
      minx = min(minx, x[i]); maxx = max(maxx, x[i]);
      miny = min(miny, y[i]); maxy = max(maxy, y[i]);
    }
    cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
  }
}