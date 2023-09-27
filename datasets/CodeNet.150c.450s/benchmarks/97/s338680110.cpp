#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define INF (1<<29)

using namespace std;

typedef pair<int,int>pii;
typedef pair<pii,int>P;

int main(void){

  int N;
  while(cin >> N,N){
    vector<P>v(N-1);
    
    for(int i=0;i<N-1;i++){
      cin >> v[i].first.first >> v[i].first.second;
      v[i].second = i+1;
    }

    sort(v.begin(),v.end());

    vector<pii>a(N,pii(0,0));

    for(int i=0;i<N-1;i++){
      int costx = 0, costy = 0;
      if(v[i].first.second % 2 == 0)costx = v[i].first.second - 1;
      else costy = v[i].first.second - 2;

      a[v[i].second].first = a[v[i].first.first].first + costx;
      a[v[i].second].second = a[v[i].first.first].second + costy;
    }

    int minx=INF,maxx=-INF,miny=INF,maxy=-INF;
    for(int i=0;i<N;i++){
      minx = min(minx, a[i].first);
      maxx = max(maxx, a[i].first);
      miny = min(miny, a[i].second);
      maxy = max(maxy, a[i].second);
    }
    
    cout << maxx+abs(minx)+1 << " " << maxy+abs(miny)+1 << endl;
  }
  
  return 0;
}