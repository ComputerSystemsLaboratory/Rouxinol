#include <iostream>
#include <algorithm>
#include <complex>
#include <vector>
using namespace std;
typedef complex<int> P;
#define x real()
#define y imag()

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
P D[4];
int main(){
  int n;
  for(int i=0;i<4;++i) D[i]=P(dx[i],dy[i]);
  while(cin>>n,n){
    vector<P> art;
    art.push_back(P(0,0));
    for(int i=0;i<n-1;++i){
      int a,d;
      cin >> a >> d;
      art.push_back(art[a]+D[d]);
    }
    int maxx = 0,minx = n;
    for(int i=0;i<n;++i){
      maxx = max(maxx, art[i].x);
      minx = min(minx, art[i].x);
    }
    int maxy = 0,miny = n;
    for(int i=0;i<n;++i){
      maxy = max(maxy, art[i].y);
      miny = min(miny, art[i].y);
    }
    cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
  }
  return 0;
}