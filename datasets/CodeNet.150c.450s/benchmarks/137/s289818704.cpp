#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
  set<string> acgt;
 
  int n;
  scanf("%d",&n);
 
  for(int i = 0; i < n; i++){
    char op[10], str[20];
    scanf("%s%s",op,str);
    if(op[0] == 'f'){
      if(acgt.find(str) != acgt.end()) printf("yes\n");
      else printf("no\n"); 
    }else acgt.insert(str);
  }
 
 
}