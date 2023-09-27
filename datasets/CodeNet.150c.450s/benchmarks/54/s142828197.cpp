#include <bits/stdc++.h>

int main() {

  std::string W;
  std::string temp;

  int ans = 0;

  std::cin >> W;
  for(int i = 0; i < W.size(); ++i) {
    W[i] = (W[i] & 0x5f);
  }
  for(;;) {
    std::cin >> temp;
    if( temp == "END_OF_TEXT" ) {
      break;
    }

    for(int i = 0; i < temp.size(); ++i) {
      temp[i] = (temp[i] & 0x5f);
    }

    if( W == temp ) {
      ans += 1;
    }
  }

  std::cout << ans << std::endl;
  
  return 0;
}