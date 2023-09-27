#include <bits/stdc++.h>
using namespace std;

int main(){
  char ch;
  int cnt[26] = {};
  while(scanf("%c", &ch) != EOF){
    if('a' <= ch && ch <= 'z'){
      cnt[ch - 'a']++;
    }
    else if('A' <= ch && ch <= 'Z'){
      cnt[ch - 'A']++;
    }
  }
  for(int i = 0; i < 26; i++){
    printf("%c : %d\n", 'a' + i, cnt[i]);
  }
}

