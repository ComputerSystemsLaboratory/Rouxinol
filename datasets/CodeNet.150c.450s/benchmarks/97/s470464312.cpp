#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cstdio>

using namespace std;

int main(){
  int N;
  while(cin>>N, N){
    if(N==1){
      cout << "1 1" << endl;
      continue;
    }
    vector<int> n(N-1);
    vector<int> d(N-1);
    for(int i=0; i<N-1; i++){
      cin >> n[i] >> d[i];
    }
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    vector<pair<int,int> > v(N);
    v[0].first=0; v[0].second=0;
    int xmax=0,xmin=0;
    int ymax=0,ymin=0;
    for(int i=1;i<N;i++){
      int nn=n[i-1];
      int dd=d[i-1];
      v[i].first = v[nn].first+dx[dd];
      v[i].second = v[nn].second+dy[dd];
      xmax=max(xmax,v[i].first);
      xmin=min(xmin,v[i].first);
      ymax=max(ymax,v[i].second);
      ymin=min(ymin,v[i].second);
    }
    cout << xmax-xmin+1 << " " << ymax-ymin+1 << endl;
  }
  return 0;
}