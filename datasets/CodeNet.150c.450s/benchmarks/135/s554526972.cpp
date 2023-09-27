#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int N, M, h[1500], w[1500];
 
  while(cin >> N >> M, N){
    for(int i = 0; i < N; i++){
      cin >> h[i];
    }
    for(int i = 0; i < M; i++){
      cin >> w[i];
    }
     
    map< int, int > foo, piyo;
    for(int i = 0; i < N; i++){
      int sum = 0;
      for(int j = i; j < N; j++){
        sum += h[j];
        foo[sum]++;
      }
    }
    for(int i = 0; i < M; i++){
      int sum = 0;
      for(int j = i; j < M; j++){
        sum += w[j];
        piyo[sum]++;
      }
    }
 
 
    int cnt = 0;
    for(map< int , int >::iterator it = foo.begin(); it != foo.end(); it++){
      cnt += it -> second * piyo[it -> first];
    }
    cout << cnt << endl;
  }
}
