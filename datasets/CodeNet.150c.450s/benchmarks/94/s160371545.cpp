#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;


int main(void){
  int N, t=0; 
  cin >> N;
  vector<int> v(N);
  for(int i=0;i<N;i++) cin >> v[i];
  for(int i=0;i<N;i++){
    for(int j=N-1; j>i;j--){
      if(v[j-1] > v[j]){
        swap(v[j-1], v[j]);
        t++;
      }
    }
  }
  for(int i=0;i<N;i++){
    cout << v[i];
    if(i != N-1)cout << " ";
    else cout << endl;
  }
  cout << t << endl;
  return 0; 
}