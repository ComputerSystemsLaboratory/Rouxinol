#include <iostream>

using namespace std;

static const int INFTY = 10000000;

int a[124][124] = {{}};
int n;


int prim(){

  int d[124] = {};
  int p[124] = {};
  int flag[124] = {};
  int min = INFTY;
  int u;
  int sum = 0;

  for(int i = 0;i < n;i++){
    d[i] = INFTY;
    p[i] = -1;
  }

  d[0] = 0;
  while(1){
    u = -1;
    min = INFTY;
    for(int i = 0;i < n;i++){
      if(flag[i] == 0 && d[i] <= min){
        u = i;
        min = d[i];
      }
    }
    //cout << "u = " << u << endl;
    //cout << "min = " << min << endl;

    if(u == -1) break;
    sum += min;
    flag[u] = 1;

    for(int i = 0;i < n;i++){
      if(flag[i] == 0 && a[u][i] != INFTY){
        if(d[i] > a[u][i]){
          d[i] = a[u][i];
          p[i] = u;
        }
      }
    }
  }
  //for(int i = 0;i < n;i++) if(a[p[i]][i] != INFTY)sum += a[p[i]][i];
  return sum;
}

int main(){

  cin >> n;

  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      cin >> a[i][j];
      if(a[i][j] == -1) a[i][j] = INFTY;
    }
  }

  cout << prim() << endl;
}