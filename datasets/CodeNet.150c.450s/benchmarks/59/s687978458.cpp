#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;

int main(void){
  int N;
  cin >> N;
  vector<int> v(N);
  for(int i=0;i<N;i++){
    cin >> v[i];
  }
  for(int j=0;j<N;j++){
      cout << v[j];
      if(j!=N-1)  cout << " ";
  }
  cout << endl;

  for(int i=1;i<N;i++){
    int key = v[i];
    int j = i - 1;
    while(j >= 0 && v[j] > key){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key;
    for(int j=0;j<N;j++){
      cout << v[j];
      if(j!=N-1)  cout << " ";
    }
    cout << endl;
  }
  return 0;
}