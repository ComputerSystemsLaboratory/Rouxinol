//Reverse Sequence
#include<bits/stdc++.h>
using namespace std;

int main(){
  char str[21];
  scanf("%s", str);
  for(int i=0; i<strlen(str); i++){
    printf("%c", str[strlen(str)-i-1]);
  }
  puts("");
  return 0;
}