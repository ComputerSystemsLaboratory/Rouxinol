#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[]){
  int n;
  vector<int> a;
  while(cin >> n){
    a.push_back(-n);
  }
  sort(a.begin(), a.end());
  std::cout << -a[0] << std::endl;
  std::cout << -a[1] << std::endl;
  std::cout << -a[2] << std::endl;
  return 0;
}