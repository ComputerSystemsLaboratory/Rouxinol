/**
 * ?§???????????????°???????????°

goto ?????????C/C++?¨????????????§???????????¨?????§???????????§????????????????????¨????????¶????????????????????????????????????????£?????????????????????° goto CHECK_NUM; ??¨?????????????????????????????¨???????????°??????????????§ CHECK_NUM: ??¨????????????????????????????§?????????????????????????????????£????????°?????????????????????????????????????????¨?????§????????????

?????????goto ???????????±??????????????????????????°?????????????????§?????±??????????????????????????????????????????????????¨?????¨?\¨?????????????????????

?¬????C++?¨???????????????°????????¨?????????????????????????????°????????????????????????????????????????????????goto ????????????????????§????£?????????????????????????

void call(int n){
  int i = 1;
 CHECK_NUM:
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
 INCLUDE3:
  if ( x % 10 == 3 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if ( x ) goto INCLUDE3;
 END_CHECK_NUM:
  if ( ++i <= n ) goto CHECK_NUM;

  cout << endl;
}
????????°???????????¬???

Input
???????????´??° n ?????????????????????????????????

Output
????¨?????????°???????????\????????´??° n ????????????????????????????????????????????????

Constraints
3???n???10000

Sample Input
30

Sample Output
 3 6 9 12 13 15 18 21 23 24 27 30
??????????????????????????????????????¨?????¨????????????????????????


 */

#include <iostream>
#include <sstream>

void call(int n) {
  int i = 1;
  do {
    int x = i;
    if (x % 3 == 0) {
      std::cout << " " << i;
    } else {
      do {
        if (x % 10 == 3) {
          std::cout << " " << i;
          break;
        }
        x /= 10;
      } while (x);
    }
  } while (++i <= n);

  std::cout << std::endl;
}

int main(int argc, char const *argv[]) {
  unsigned int n;

  while (true) {
  std::string Param;

  getline(std::cin, Param);
  std::istringstream iss(Param);
  iss >> n;

  if (n < 3 || n > 10000) {
    std::cout << "Error: 1 <= x <= 10000" << std::endl;
  } else {
    break;
  }
}
  call(n);

  return 0;
}