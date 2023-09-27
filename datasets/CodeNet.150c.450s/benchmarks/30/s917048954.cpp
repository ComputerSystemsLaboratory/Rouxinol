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
    int min=i;
    for(int j=i+1; j<N;j++){
      if(v[min] > v[j]){
        min = j;
      }
    }
    if(v[i] > v[min]){
      swap(v[i], v[min]);
      t++;
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