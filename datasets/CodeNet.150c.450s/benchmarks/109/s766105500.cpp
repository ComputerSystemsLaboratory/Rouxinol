#include<cstdio>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int n,h,m,s;
  while(scanf("%d",&n),n){
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++){
      scanf("%d:%d:%d",&h,&m,&s);
      v.push_back(make_pair(h*3600 + m*60 + s,1));

      scanf("%d:%d:%d",&h,&m,&s);
      v.push_back(make_pair(h*3600 + m*60 + s,0));
    }

    sort(v.begin(),v.end());

    int cnt = 0, ans = 0;
    for(int i=0;i<v.size();i++){
      if(v[i].second == 1)cnt++;
      else cnt--;
      ans = max(ans,cnt);
    }

    printf("%d\n",ans);
  }
}
    