/**
 * ????????¢????????????

????????¢?????????????????????????????????????????????????????°?????????????????????????????????????¬????????????????????????¢?????????????????????????????¨??????????????????????????§?¨?
(W,H) ????????????????????????????????????????????????????????§?¨? (x,y) ??¨?????? r ??§?????????????????????


Input
???????????´??° W???H???x???y???r ????????????????????§??????????????????????????????

Output
??????????????¢????????¨????????????????????? Yes ??¨????????¨??§???????????????????????° No
??¨????????????????????????????????????

Constraints
???100???x,y???100
0<W,H,r???100

Sample Input 1
5 4 2 2 1
Sample Output 1
Yes
Sample Input 2
5 4 2 4 1
Sample Output 2
No

 */

#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  int x, y;
  x = y = 0;
  unsigned int W, H, r;
  W = H = r = 0;

  while (true) {
  std::string param;

  getline(std::cin, param);
  std::istringstream iss(param);
  iss >> W >> H >> x >> y >> r;

  if (W > 100 || H > 100 || r > 100) {
    std::cout << "Error: 0 <= W, H, r <= 100" << std::endl;
  } else if ((x < -100 || x > 100) || (y < -100 || y > 100)) {
    std::cout << "Error: -100 <= x, y <= 100" << std::endl;
  } else {
    break;
  }
}

if (((x - (int)r) >= 0 && (x + r) <= W) && ((y - (int)r) >= 0 && (y + r) <= H)) {
  std::cout << "Yes" << std::endl;
} else {
  std::cout << "No" << std::endl;
}

  return 0;
}