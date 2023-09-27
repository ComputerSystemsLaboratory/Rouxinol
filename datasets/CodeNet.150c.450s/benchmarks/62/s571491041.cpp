#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(3);
  std::cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  for (int i = 0; i < 3; i++) {
    if(i != 2)std::cout << a[i] << " ";
    else std::cout << a[i] << std::endl;
  }
  return 0;
}