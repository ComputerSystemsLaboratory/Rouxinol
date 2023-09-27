#include <iostream>
using namespace std;
#define NMAX 200
#define rep(i, N) for(int i = 1 ; i < N ; i++)
int xmin, xmax, ymin, ymax;
int x[NMAX], y[NMAX];
int dx[] = {-1, 0 , 1, 0};
int dy[] = {0, -1, 0, 1};
int N;


int main()
{
  while(true){
    
    cin >> N;
    if(N == 0) break;
    
    x[0] = y[0] = 0;
    int ni, di;
    xmin = xmax = ymin = ymax = 0;
    rep(i, N){
      cin >> ni >> di;
      x[i] = x[ni] + dx[di];
      y[i] = y[ni] + dy[di];
      
      if(x[i] < xmin) xmin = x[i];
      if(x[i] > xmax) xmax = x[i];
      if(y[i] < ymin) ymin = y[i];
      if(y[i] > ymax) ymax = y[i];
    }
    
    cout << xmax - xmin + 1 << ' ' <<  ymax - ymin + 1 << '\n';
  }
}