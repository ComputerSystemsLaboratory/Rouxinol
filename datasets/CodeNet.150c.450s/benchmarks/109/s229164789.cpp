#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
typedef pair< int , int > P;
int main(){
  int n;
  vector< P > vc;
  while(scanf("%d",&n) , n){
    vc.resize(2 * n);
    for(int i = 0 ; i < n ; i++ ){
      int h, m, s;
      scanf("%d:%d:%d", &h, &m, &s);
      vc[2*i] = P( h*3600 + m*60 + s, 1);
      scanf("%d:%d:%d", &h, &m, &s);
      vc[2*i+1] = P( h*3600 + m*60 + s, -1);
    }
    sort(vc.begin(),vc.end());
    int ret = 0, ans = 0;
    for(int i = 0 ; i < 2 * n ; i++ ){
      ret += vc[i].second;
      ans = max( ans, ret);
    }
    printf("%d\n", ans);
  }
}