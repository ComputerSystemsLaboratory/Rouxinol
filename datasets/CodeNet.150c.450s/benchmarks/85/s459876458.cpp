#include<iostream>
#include<algorithm>
using namespace std;

static const int N = 100;

struct Matrix{int row, col;};
Matrix M[N];
int cost[N][N] = {0};

int prod(int begin, int end){
  int mincost = 100000000, l = end - begin;
  if(cost[begin][end] > 0){
    return cost[begin][end];
  } else {
    if(l == 0){
      mincost = 0;
    } else if(l == 1){
      cost[begin][end] = M[begin].row * M[begin].col * M[end].col;
      mincost = cost[begin][end];
    } else {
      int temp;
      for(int i = 0; i < l; i++){
        temp = prod(begin, begin + i) + prod(begin + i + 1, end);
        temp += M[begin].row * M[begin + i].col * M[end].col;
        mincost = min(mincost, temp);
      }
      cost[begin][end] = mincost;
    }
    return mincost;
  }
}

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> M[i].row >> M[i].col;
  }

  cout << prod(0, n - 1) << endl;

  return 0;
}