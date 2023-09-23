#include <iostream>
#include <string>
#include <ctype.h>
#include <cstdio>
using namespace std;

int main() {
  char a[1200];
  int i;
  for (i = 0; i < 1200; i++) {
    a[i] = getchar();
    if (a[i] == '\n') break;
  }
  for (int j = 0; j < i; j++) {
    if (a[j] == '\n') break;
    else if (isupper(a[j])) a[j] = tolower(a[j]);
    else if (islower(a[j])) a[j] = toupper(a[j]);
  }
  for (int j = 0; j < i; j++)  {
    if (a[j] == '\n') break;
    cout << a[j];
  }
  cout << endl;
}
