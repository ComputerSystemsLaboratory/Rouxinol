#include<iostream>
#include<vector>

using namespace std;

const int N = 10000002;

int main(){
  int n,count = 0 ;
  vector<int> v(N,1) ;
  v[0] = 0, v[1] = 0;
  for(size_t i = 2; i < N-1;++i){
    if(v[i] == 1){
      for(size_t j = i*2; j < N-1;j+=i){
          v[j] = 0 ;
      }
    }
  }
  while(cin >> n){
    count = 0 ;
    for(size_t i = 2; i <= n;++i){
      if(v[i] == 1){
        ++count ;
      }
    }
    cout << count << endl;
  }
  return 0 ;
}