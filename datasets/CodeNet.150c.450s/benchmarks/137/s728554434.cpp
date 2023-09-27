/**
 * ??\????????????????????????????°?????????????????????????????£??????????????????????

insert str: ????????? str ??????????????????
find str: ????????? str ?????????????????´??? 'yes'??¨????????????????????´??? 'no'??¨???????????????
??\???
??????????????????????????° n ?????????????????????????¶???? n ?????? n
??¶?????????????????????????????????????????????????????¢??????????¨??????¨????????§?????????

??????
??? find ?????????????????????yes ????????? no ???????????????????????????????????????

??¶?´?
??????????????????????????????'A', 'C', 'G', 'T' ???????¨????????????????????§????????????????
1????????????????????????12
n???1,000,000
??\?????? 1
6
insert AAA
insert AAC
find AAA
find CCC
insert CCC
find CCC
????????? 1
yes
no
yes
??\?????? 2
13
insert AAA
insert AAC
insert AGA
insert AGG
insert TTT
find AAA
find CCC
find CCC
insert CCC
find CCC
insert T
find TTT
find T
????????? 2
yes
no
no
yes
yes
yes
 */

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <unordered_set>

int main(int argc, char const *argv[]) {
  unsigned int n = 0;
  std::string Param;
  std::istringstream iss;
  std::string Command;
  std::string Word;
  // std::vector<std::string> Dic;
  std::unordered_set<std::string> Dic;

  getline(std::cin, Param);
  iss.str(Param);
  iss >> n;
  iss.clear();
  for (size_t i = 0; i < n; i++) {
    getline(std::cin, Param);
    iss.str(Param);
    iss >> Command >> Word;
    iss.clear();
    if (Command == "insert") {
      Dic.insert(Word);
    } else if (Command == "find") {
      auto Result = Dic.find(Word);
      if (Result != Dic.end()) {
        std::cout << "yes" << std::endl;
      } else {
        std::cout << "no" << std::endl;
      }
    }
  }
  return 0;
}