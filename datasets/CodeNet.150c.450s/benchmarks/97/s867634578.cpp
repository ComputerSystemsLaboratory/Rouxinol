#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {

  int N;
  while(cin >> N){
    if( N == 0 ) break;
    vector<int> x(N, 0);
    vector<int> y(N, 0);
    int n, d;
    for(int i=1; i<N; i++){
      cin >> n >> d;
      x[i] = x[n] + dx[d];
      y[i] = y[n] + dy[d];
    }

    int X = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
    int Y = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
    cout << X + 1 << " " << Y + 1 << endl;
  }

  return 0;
}

// EOF