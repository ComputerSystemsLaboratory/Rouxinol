#include <bits/stdc++.h>
using namespace std;

struct Line{
  int a,b;
};

int main(){
  int w,n; cin>>w>>n;

  vector<Line> h_line(n);
  vector<int> ans(w);

  // input
  for(int i=0,a,b;i<n;++i){
    scanf("%d,%d", &a, &b);
    h_line[i].a = a;
    h_line[i].b = b;
  }

  // solve
  for(int i=1;i<=w;++i){
    int now = i;
    for(int j=0;j<n;++j){
      if(h_line[j].a == now)
        now = h_line[j].b;
      else if(h_line[j].b == now)
        now = h_line[j].a;
    }
    ans[now-1] = i;
  }

  // output answer
  for(int i=0;i<w;++i)
    cout<<ans[i]<<endl;

  return EXIT_SUCCESS;
}