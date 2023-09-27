#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char str[20];
  cin >> str;

  for(int i = strlen(str); i > 0 ; i--)
    cout << *(str + i - 1);
  cout << '\n';

  return 0;
}