#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;

int main()
{
  while(1){
    int N;
    cin >> N;
    if(N == 0) break;
    int  t, b, r, l;
    t = b = r = l = 0;
    pii sq[N];
    sq[0].first = sq[0].second = 0;
    for(int i = 1; i < N; i++){
      int n, d;
      cin >> n >> d;
      if(d == 0){
        sq[i].first = sq[n].first - 1;
        sq[i].second = sq[n].second;
      }else if(d == 1){
        sq[i].first = sq[n].first;
        sq[i].second = sq[n].second - 1;
      }else if(d == 2){
        sq[i].first = sq[n].first + 1;
        sq[i].second = sq[n].second;
      }else if(d == 3){
        sq[i].first = sq[n].first;
        sq[i].second = sq[n].second + 1;
      }
      r = max(r, sq[i].first);
      l = min(l, sq[i].first);
      t = max(t, sq[i].second);
      b = min(b, sq[i].second);
    }
    cout << r - l + 1  << " " << t - b + 1 << endl;
  }
}