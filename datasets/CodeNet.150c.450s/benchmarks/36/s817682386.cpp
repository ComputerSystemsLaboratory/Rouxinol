#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
  int d;
  while(std::cin >> d){
    int ans = 0, cnt = 1;
    while(d*cnt < 600){
      ans += d*d*d*cnt*cnt++;
    }
    std::cout << ans << std::endl;
  }
  return 0;
}