#include <iostream>

using namespace std;

int main(void)
{
  int N;
  int n[250], d[250];
  int x[250], y[250];

  while(1){
  cin >> N;
  if(N == 0) break;
  for(int i = 1; i < N; i++){
    cin >> n[i];
    cin >> d[i];
  }

  x[0] = y[0] = 0;
  for(int i = 1; i < N; i++){
    switch(d[i]){
    case 0:
      x[i] = x[n[i]] - 1;
      y[i] = y[n[i]];
      break;
    case 1:
      x[i] = x[n[i]];
      y[i] = y[n[i]] - 1;
      break;
    case 2:
      x[i] = x[n[i]] + 1;
      y[i] = y[n[i]];
      break;
    case 3:
      x[i] = x[n[i]];
      y[i] = y[n[i]] + 1;
      break;
    }
  }

    int minX = 100000, minY = 100000;
    int maxX = -100000, maxY = -100000;
    for(int i = 0; i < N; i++){
      if(minX > x[i]) minX = x[i];
      if(minY > y[i]) minY = y[i];
      if(maxX < x[i]) maxX = x[i];
      if(maxY < y[i]) maxY = y[i];
    }
    cout << maxX - minX +1 << " " << maxY - minY +1<< endl;
  }
  return 0;
}