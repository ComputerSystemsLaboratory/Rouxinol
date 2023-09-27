#include<bits/stdc++.h>

using namespace std;

int main(){
  char str[21];
  cin >> str;
  for(int i=strlen(str)-1;i>=0;i--){
    printf("%c",str[i]);
  }
  cout << endl;
  return 0;
}