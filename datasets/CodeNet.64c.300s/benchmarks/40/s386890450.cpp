#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char c;

  while(true){
    scanf("%c", &c);
    if(c=='\n') break;
    if(c>='a'&&c<='z') c-=32;
    else if(c>='A'&&c<='Z') c+=32;
    cout << c;
  }
  cout << endl;
}

