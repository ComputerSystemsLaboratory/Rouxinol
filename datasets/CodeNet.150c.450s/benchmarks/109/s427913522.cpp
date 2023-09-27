#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int main(){
  int n,h,m,s;
  while(scanf("%d",&n), n){
    vector<pii> event;

    for(int i=0;i<n;i++){
      scanf("%d:%d:%d",&h,&m,&s);
      event.push_back(pii(h*3600 + m*60 + s, 1));
      scanf("%d:%d:%d",&h,&m,&s);
      event.push_back(pii(h*3600 + m*60 + s, -1));
    }

    sort(event.begin(),event.end());

    int cnt = 0, ans = 0;
    for(int i=0;i<(int)event.size();i++){
      cnt += event[i].second;
      ans = max(ans, cnt);
    }
    cout << ans << endl;
  }
}