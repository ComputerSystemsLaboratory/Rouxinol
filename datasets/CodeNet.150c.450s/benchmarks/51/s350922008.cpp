#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int a[31];
  memset(a, 0, sizeof(a));
  for(int i=0;i<28;i++){
    int idx; cin >> idx;
    a[idx] = 1;
  }
  for(int i=1;i<=30;i++)
    if(!a[i]) cout << i << endl;
}