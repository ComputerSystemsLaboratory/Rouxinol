// #include<iostream>
// #include<cctype>
// using namespace std;

#include<cstdio>
#include<cstring>

int main(){
  char x[1001];
  
  while(1){
    int c=0;
    scanf("%s", x);
    if (strcmp(x,"0")==0) break;
    int i=0;
    while(x[i]!='\0'){
      c+=x[i]-'0';
      i++;
    }
    printf("%d\n", c);
  }

  return 0;
}