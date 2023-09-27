#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

char tolower(char);

int main(){
  char w[100];
  char t[100];
  char eof[100]="END_OF_TEXT";
  scanf("%s", w);
  int counter=0;
  while(true){
    scanf("%s", t);
    if(strcmp(t, eof)==0) break;
    for(int i=0; t[i]!='\0'; i++){
      t[i] = tolower(t[i]);
    }
    if(strcmp(t, w)==0) counter++;
  }
  cout << counter << endl;
}

char tolower(char c){
  if(c>='A'&&c<='Z')c+=32;//大文字を小文字に
  return c;
}
