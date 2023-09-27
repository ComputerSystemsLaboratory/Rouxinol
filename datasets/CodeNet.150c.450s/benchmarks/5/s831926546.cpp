#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  int N;
  cin >> N;
  int a[N];

  for(int i=0;i<N;i++){
    cin >> a[i];
  }
  for(int i=N-1;i!=-1;i--){
    if(i!=0)cout << a[i] << ' ';
    else cout << a[i] << endl;
  }
  return 0;
}