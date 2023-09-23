//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B
#include <iostream>
using namespace std;

int many_ways(int n, int x){
  int counter = 0;
  for(int i = n; i > 0; i--){
    for(int j = 1; j < i; j++){
      for(int k= j+1; k < i; k++){
        if(i+j+k == x) counter++;
      }
    }
  }
  return counter;
}

int main(){
  int n,x;
  while(cin >> n >> x){
    if(n == 0 && x == 0) break;
    else cout << many_ways(n,x) << endl;
  }
}