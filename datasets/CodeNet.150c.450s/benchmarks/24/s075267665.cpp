#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;

int main(){
  int N, M, d, p;

  while(cin >> N >> M, (N | M)){
    vector<P> vec;
    for(int i = 0 ; i < N ; i++){
      cin >> d >> p;
      vec.push_back(P(-p,d));
    }
  
    int res = 0;
    sort(vec.begin(),vec.end());
    for(int i = 0 ; i < N ; i++){
      P now = vec[i];
      if(M-now.second >= 0){
        M -= now.second;
      }else{
        if(M){
          now.second -= M;
          M = 0;
        }
        res += now.second*(-now.first);
      }
    }
    cout << res << endl;
  }

  return 0;
}