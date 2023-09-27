#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char c;
  char b='0';
  int s=0;
  while(true){
    scanf("%c", &c);
    if(c=='0' && b=='\n')break;
    if(c=='\n'){
      cout << s << endl;
      s=0;
    } else {
      s+=int(c-'0');
    }
    b=c;
  }
}
