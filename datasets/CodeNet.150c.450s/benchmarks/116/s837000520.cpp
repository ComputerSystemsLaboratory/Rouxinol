#include<iostream>
#include<algorithm>
#define N 100000

using namespace std;

int main(){
  int n, k, data[N];
  while(1){
    cin >> n >> k;
    if(!n && !k) break;
    int x=0;
    for(int i=0; i<n; ++i){
      cin >> data[i];
      if(i<k) x += data[i];
    }
    int max_=x;
    for(int i=k; i<n; ++i){
      x -= data[i-k];
      x += data[i];
      max_ = max(max_, x);
    }
    cout << max_ << endl;
  }
  return 0;
}