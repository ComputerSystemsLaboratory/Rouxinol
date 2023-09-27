#include <bits/stdc++.h>

using namespace std;

char str[21];

int main(){
  scanf("%s",str);
  for (int i=0,l=strlen(str);i<l/2;i++){
    swap(str[i],str[l-i-1]);
  }
  printf("%s\n",str);
  return 0;
}