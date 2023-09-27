#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

int main(){
  auto read = [](){
                int hh,mm,ss;
                scanf("%d:%d:%d",&hh,&mm,&ss);
                return hh*3600 + mm*60 + ss;
              };

  int n;
  while(cin >> n, n){

    vector<pair<int,int>> T;
    for(int i = 0; i < n; ++i){
      int in = read(), out = read();
      T.emplace_back(in,1);
      T.emplace_back(out,-1);
    }
    sort(T.begin(), T.end());
    int cnt = 0, t = 0;
    for(auto e : T){
      t -= e.second;
      if(t < 0) ++cnt, ++t;
    }
    cout << cnt << endl;
  }
}

