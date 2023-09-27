#include<iostream>
#include<cctype>
using namespace std;

#include<cstdio>
#include<cstring>

int main(){
  char s[202], t[202], p[101];

  scanf("%s %s", s, p);
  strcpy(t, s);
  strcat(s, t);
  if (strstr(s, p)==NULL) cout << "No\n";
  else cout << "Yes\n";
  

  return 0;
}