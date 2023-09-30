/**
 * ??§????????¨?°????????????\?????????

????????????????????????????°?????????¨??§???????????\????????????????????°????????????????????????????????????

Input
????????????1???????????????????????????

Output
????????????????????????????°?????????¨??§???????????\??????????????????????????????????????????????????¢????????????????????\???????????????????????????????????????????????????

Constraints
??\?????????????????????????????? < 1200
Sample Input
fAIR, LATER, OCCASIONALLY CLOUDY.
Sample Output
Fair, later, occasionally cloudy.

 */

#include <iostream>
#include <locale>
#include <sstream>

int main(int argc, char const *argv[]) {
  std::string FromStr = "fAIR, LATER, OCCASIONALLY CLOUDY.";
  std::string ToStr;
  unsigned short NumberOfCharacters = 0;
  std::ostringstream oss;

  while (true) {
    getline(std::cin, FromStr);
    NumberOfCharacters = FromStr.length();
    if (NumberOfCharacters > 1200) {
      std::cout << "Error: Input string must be under 1200 characters."
                << std::endl;
    } else {
      break;
    }
  }

  for (size_t i = 0; i < NumberOfCharacters; i++) {
    char ToChar;
    if (isupper(FromStr[i])) {
      ToChar = tolower(FromStr[i]);
    } else {
      ToChar = toupper(FromStr[i]);
    }
    oss << ToChar;
  }
  std::cout << oss.str() << std::endl;
  return 0;
}