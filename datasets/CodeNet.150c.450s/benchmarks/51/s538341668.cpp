#include <iostream>
using namespace std;

int main(){
  int pe[31] = {0};
  for(int i=0;i<28;i++){
    int t; cin >> t;
    pe[t] = 1;
  }
  for(int i=1;i<=30;i++){
    if(!pe[i]) cout << i << endl;
  }
}