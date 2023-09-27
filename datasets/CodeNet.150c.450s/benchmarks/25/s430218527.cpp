#include<cstdio>
#include<cstring>

int main() {
  char ch;
  char ch1[1201], ch2[27];
  int A[26] = {};
  
  while( scanf("%c", &ch) != EOF) {
      int i = 0;
      ch1[i] = ch;
          for( int j = 0; j < 27; j++) {
            ch2[j] = j + 97;
            if(ch1[i] == ch2[j] || ch1[i] == ch2[j] - 32){
              A[j] += 1;
            }
          }
      ++i;
    }

  for( int i = 0; i < 26; i++) {
    ch2[i] = i + 97;
    printf("%c : %d\n",ch2[i], A[i]);
  }

  return 0;
}