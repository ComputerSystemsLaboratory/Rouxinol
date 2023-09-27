#include <bits/stdc++.h>
using namespace std;

#define lambda(RES_TYPE, ...) (function<RES_TYPE(__VA_ARGS__)>)[&](__VA_ARGS__) -> RES_TYPE
#define method(FUNC_NAME, RES_TYPE, ...) function<RES_TYPE(__VA_ARGS__)> FUNC_NAME = lambda(RES_TYPE, __VA_ARGS__)

#define range(i, l, r) for (int i = l; i < (int)(r); ++i)

signed main(){
  int N, M;
  set<string> s;

  cin>>N;

  for(int i = 0; i < N; i++){
    string x;

    cin>>x;
    s.insert(x);
  }

  cin>>M;
  
  for(int i = 0, j = 0; i < M; i++){
    string y;

    cin>>y;
    
    if(s.count(y)) {
      if(j) {
        cout<<"Closed by "<<y<<endl;
      } else {
        cout<<"Opened by "<<y<<endl;
      }
      
      j = !j;
    } else {
      cout<<"Unknown "<<y<<endl;
    }
  }
  
  return 0;
}


