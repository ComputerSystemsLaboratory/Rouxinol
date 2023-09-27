
/*
 * main.cpp
 *
 *  Created on: 2011/04/03
 *      Author: satoki
 *      22:20 ~ 22:28
 */
#include <iostream>
#include <string.h>
using namespace std;

char cStr[21];

bool input() {
  scanf("%s", cStr);
  return true;
}

void manage() {
  int i;
  char tmp;
  for (i = 0; i < (int)string(cStr).size() / 2; i++) {
    tmp = cStr[i];
    cStr[i] = cStr[string(cStr).size() - i - 1];
    cStr[string(cStr).size() - i - 1] = tmp;
  }
}

int main() {
  input();
  manage();
  printf("%s\n", cStr);
  return 0;
}