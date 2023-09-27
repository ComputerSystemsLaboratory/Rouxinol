#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
  char input;
  while (1) {
    scanf("%c", &input);
    if (input == '\n') break;
    if (islower(input)) printf("%c", toupper(input));
    else if (isupper(input)) printf("%c", tolower(input));
    else printf("%c", input);
  }
  cout << endl;
  return 0;
}