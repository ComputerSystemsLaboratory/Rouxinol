#include<cstdio>
#include<vector>
using namespace std;

const int lim = 24*60*60;

inline int t(int h, int m, int s){
  return h*60*60 + m*60 + s;
}

int main(){
  int n;
  while(scanf("%d",&n)){
    if(n==0)break;

    vector<int> x(lim+1,0);
    for(int i=0;i<n;i++){
      int h1,m1,s1, h2,m2,s2;
      scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);

      x[t(h1,m1,s1)]++;
      x[t(h2,m2,s2)]--;
    }

    int ans = 0, cur = 0;
    for(int i=0;i<=lim;i++){
      cur += x[i];
      ans = max(ans, cur);
    }
    printf("%d\n",ans);
  }
}