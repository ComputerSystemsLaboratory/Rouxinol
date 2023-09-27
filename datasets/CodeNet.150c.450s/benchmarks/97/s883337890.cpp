#include <bits/stdc++.h>
using namespace std;

pair<int,int> a[1000];
const int dx[4] = {-1,0,1,0};
const int dy[4] = {0,-1,0,1};

int main(){

  while(1){
    int N;
    int xmax = 0,xmin = 0,ymax = 0,ymin = 0;
    cin >> N; if(N==0) break;

    for(int i = 0; i < N; i++) a[i] = make_pair(0,0);

    for(int i = 1; i < N; i++){
      int n,d;
      cin >> n >> d;

      a[i] = make_pair(a[n].first + dx[d],a[n].second + dy[d]);
      //cout << a[i].first << " " << a[i].second << endl;
      for(int i = 0; i < N; i++){
        xmax = max(xmax,a[i].first);
        xmin = min(xmin,a[i].first);
        ymax = max(ymax,a[i].second);
        ymin = min(ymin,a[i].second);
      }

      //cout << xmax << " " << xmin << " " << ymax << " " << ymin << endl;
    }
    cout << xmax-xmin+1 << " " << ymax-ymin+1 << endl;
  }
  return 0;
}

