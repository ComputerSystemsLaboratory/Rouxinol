#include<bits/stdc++.h>
using namespace std;
int main(){
  char ch[1200];
  int i=0;
  while(1){
    scanf("%c",&ch[i]);
    if(ch[i]== '\n') break;
    i++;
  }
  for(int m=0;m<i+1;m++){
    if(islower(ch[m])) printf("%c",toupper(ch[m]));
    else printf("%c",tolower(ch[m]));
  }
  return 0;
}

      
  

