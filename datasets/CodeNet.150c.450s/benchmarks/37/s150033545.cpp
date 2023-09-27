#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

pair<double, double> solve(int a, int b, int c, int d, int e, int f){
  double pre = b * d - a * e;
  int pre_x = f * b - c * e;
  int pre_y = c * d - a * f;
  pair<double, double> ans;
  
  ans.first = pre_x == 0 ? 0.0 : pre_x / pre;
  ans.second =  pre_y == 0 ? 0.0 : pre_y / pre;

  return ans;
}

int main(){
  int a, b, c, d, e, f;
  vector< pair<double, double> > ans;

  while(cin >> a && cin >> b && cin >> c && cin >> d &&	cin >> e && cin >> f) ans.push_back(solve(a, b, c, d, e, f)); 

  for(int i = 0; i < (int)ans.size(); i++) printf("%.3f %.3f\n", ans[i].first, ans[i].second);
  
  return 0;
}