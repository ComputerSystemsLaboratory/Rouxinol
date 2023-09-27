#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n[5];
  for(int i=0;i<5;i++)
    cin >> n[i];
  sort(n,n+5,greater<int>());
  for(int i=0;i<5;i++){
    cout << n[i];
    if(i==4) break;
    cout << ' ';
  }
  cout << endl;
  return 0;
}