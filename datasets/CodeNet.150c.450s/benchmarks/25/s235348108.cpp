/**
 * ?????????????????????

?????????????????±??????????????????????????¢???????????????????????°?????°??????????????°?????????????????????????????????
??????????°?????????¨??§??????????????\???????????????

Input
?????°????????????????????????????????±???????????????????????????

Output
?????????????????±???????????????????????¢???????????????????????°?????\??????????????¢?????§????????????????????????

a : a????????°
b : b????????°
c : c????????°
  .
  .
z : z????????°
Constraints
??±???????????????????????° < 1200
Sample Input
This is a pen.
Sample Output
a : 1
b : 0
c : 0
d : 0
e : 1
f : 0
g : 0
h : 1
i : 2
j : 0
k : 0
l : 0
m : 0
n : 1
o : 0
p : 1
q : 0
r : 0
s : 2
t : 1
u : 0
v : 0
w : 0
x : 0
y : 0
z : 0
 */

#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

int main(int argc, char const *argv[]) {
  std::string Source;
  unsigned short NumberOfChars = 0;
  std::vector<unsigned short> Summary(26, 0);

  while (getline(std::cin, Source)) {

    NumberOfChars = Source.length();
    if (NumberOfChars > 1200) {
      std::cout << "Error: Input string must be "
                   "less than 1200 characters."
                << std::endl;
    } else {
      std::transform(Source.begin(), Source.end(), Source.begin(), tolower);
      for (size_t i = 0; i < NumberOfChars; i++) {
        if (Source[i] >= 'a' || Source[i] <= 'z') {
          Summary[tolower(Source[i]) - 'a']++;
        }
      }
    }
  }

  for (size_t i = 0; i < 26; i++) {
    std::cout << (char)(i + 'a') << " : " << Summary[i] << std::endl;
  }
  return 0;
}