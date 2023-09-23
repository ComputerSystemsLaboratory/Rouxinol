#include<iostream>
#define N 21

using namespace std;

typedef unsigned long long ull;

int main(){
  int n, x;
  ull data[N], data_[N];
  cin >> n;
  for(int i=0; i<N; ++i) data[i] = 0;
  for(int i=0; i<n-1; ++i){
    cin >> x;
    if(i == 0){
      data[x] = 1;
      continue;
    }
    for(int j=0; j<N; ++j) data_[j] = 0;
    for(int j=0; j<N; ++j){
      if(j-x >= 0 && j-x <= 20) data_[j-x] += data[j];
      if(j+x >= 0 && j+x <= 20) data_[j+x] += data[j];
    }
    for(int j=0; j<N; ++j) data[j] = data_[j];
  }
  cin >> x;
  cout << data[x] << endl;
  return 0;
}