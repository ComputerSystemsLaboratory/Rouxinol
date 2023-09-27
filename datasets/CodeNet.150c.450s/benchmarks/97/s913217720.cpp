#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int n;
int x[202], y[202];

int main(){
  while(cin >> n, n){
    int minX = 0;
    int maxX = 0;
    int minY = 0;
    int maxY = 0;

    x[0] = 0;
    y[0] = 0;

    for(int i = 1; i < n; i++){
      int m, d;
      cin >> m >> d;

      if(d == 0){
        x[i] = x[m] - 1;
        y[i] = y[m];
      }
      else if(d == 1){
        x[i] = x[m];
        y[i] = y[m] + 1;
      }
      else if(d == 2){
        x[i] = x[m] + 1;
        y[i] = y[m];
      }
      else{
        x[i] = x[m];
        y[i] = y[m] - 1;
      }

      minX = min(minX, x[i]);
      maxX = max(maxX, x[i]);
      minY = min(minY, y[i]);
      maxY = max(maxY, y[i]);
    }

    cout << maxX - minX + 1 << " " << maxY - minY + 1 << endl;
  }
}