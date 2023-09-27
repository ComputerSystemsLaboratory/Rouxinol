#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int a[5] = {0};
  for(int i = 0;i<5;i++) cin >> a[i];
  sort(a,a+5, [](const int& a, const int& b){
    return a > b;
  });
  for(int i = 0;i<5;i++){
    if(i != 0) cout << " ";
    cout << a[i];
    if(i == 4) cout << endl;
  }
}