#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(void)
{
  int i,j,k,m[27]={};
  char ch;

  while ( scanf("%c", &ch) != EOF ){
    ch = tolower(ch);
    i = ch - 'a' + 1;
    m[i] = m[i] + 1;
  }

  for(k = 1; k <= 26; k++){
    j = 0x60 + k;
    cout << (char)j << " : " << m[k] << endl;  
  }
  return 0;
}