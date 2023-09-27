#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

int main(){
  char ch;
  char seq[1200];

  for(int i = 0; i<1200; i++){
    scanf("%c", &ch);
    if(islower(ch)){
      printf("%c", toupper(ch));
    }
    else if(isupper(ch)){
      printf("%c", tolower(ch));
    }
    else{
      printf("%c", ch);
    }
    if (ch == '\n') break;
  }



  /*
  for(int i = 0; i<1200; i++){
    if(islower(ch)){
      cout << toupper(ch);
    }
    else if(isupper(ch)){
      cout << tolower(ch);
    }
    else{
      cout << ch;
    }
  }
  */


  return 0;
}