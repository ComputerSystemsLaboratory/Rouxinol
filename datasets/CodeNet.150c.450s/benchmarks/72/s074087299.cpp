#include<iostream>

using namespace std;

int main()
{
  char c;
  while(cin.get(c)){
    if(c>='a'&& c<='z'){
      cout << (char)(c-32);
    }else if(c>='A' && c<='Z'){
      cout << (char)(c+32);
    }else cout << c;
  }
  return 0;
}

