#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
  int N;
  for(;;) {
    cin>>N;
    if(!N) break;
    int n,d;
    int x[N],y[N];
    x[0] = 0,y[0] = 0;
    for(int i=0; i<N-1; ++i) {
      cin>>n>>d;
      x[i+1] = x[n]+dx[d];
      y[i+1] = y[n]+dy[d];
    }

    int minw, maxw, minh, maxh;
    minw = *min_element(x, x+N);
    minh = *min_element(y, y+N);
    maxw = *max_element(x, x+N);
    maxh = *max_element(y, y+N);
    cout<<maxw-minw+1<<" "<<maxh-minh+1<<endl;
  }
}