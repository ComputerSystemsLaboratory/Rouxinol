// input: alds1_10_b.in
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define NIL -1

struct Matrix {
  Matrix(int r, int c)
    : r(r), c(c){
  }
  int r;
  int c;
};

int costs[101][101];

void init_costs() {
  for(int i=0; i<101; i++) {
    for(int j=0; j<101; j++) {
      costs[i][j] = NIL;
    }
  }
}

int cost(vector<Matrix>& ms, int start, int end) {
  if(costs[start][end] != NIL) {
    return costs[start][end];
  }

  if(start == end) {
    costs[start][end] = 0;
    return 0;
  }

  if(end - start == 1) {
    Matrix s = ms.at(start);
    Matrix e = ms.at(end);
    int c = s.r * s.c * e.c;
    costs[start][end] = c;
    return c;
  }

  vector<int> cs;
  for(int i=start; i<end; i++) {
    int c1 = cost(ms, start, i);
    int c2 = cost(ms, i+1, end);
    int c3 = ms.at(start).r * ms.at(i).c * ms.at(end).c;
    cs.push_back(c1 + c2 + c3);
  }
  int c = *min_element(cs.begin(), cs.end());
  costs[start][end] = c;

  return c;
}

int solve(vector<Matrix>& ms) {
  return cost(ms, 0, ms.size()-1);
}

int main() {
  init_costs();

  int n;
  cin >> n;

  vector<Matrix> ms;

  for(int i=0; i<n; i++) {
    int r, c;
    cin >> r >> c;

    ms.push_back(Matrix(r, c));
  }

  cout << solve(ms) << endl;
}