/**
 * ????????¢?????¢?????¨??¨?????????

?????? a cm ?????? b cm ???????????¢?????¢?????¨??¨?????????????±???????????????°?????????????????????????????????

Input
a ??¨ b ????????????????????§????????????????????????????????????

Output
??¢?????¨??¨?????????????????????????????§????????£????????????????????????????????????

Constraints
1 ??? a, b ??? 100
Sample Input
3 5
Sample Output
15 16
????????¢?????¢?????¨??¨?????????

?????? a cm ?????? b cm ???????????¢?????¢?????¨??¨?????????????±???????????????°?????????????????????????????????

Input
a ??¨ b ????????????????????§????????????????????????????????????

Output
??¢?????¨??¨?????????????????????????????§????????£????????????????????????????????????

Constraints
1 ??? a, b ??? 100
Sample Input
3 5
Sample Output
15 16

 */

#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {
  std::string param;

  unsigned int a, b = 0;

  while (true) {

    getline(std::cin, param);
    std::istringstream iss(param);
    iss >> a >> b;

    if ((a < 1 || a > 100) || (b < 1 || b > 100)) {
      std::cout << "Error: 1 <= a, b <= 100" << std::endl;
    } else {
      break;
    }
  }

  std::cout << a * b << " " << (a + b) * 2 << std::endl;
  return 0;
}