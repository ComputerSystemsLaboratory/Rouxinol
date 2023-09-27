#include<cstdio>
#include<cstring>
#include<cctype>

int main(){
  char str; //文字列は最後に終端文字
  int alp[26] = {0};

  while ( scanf("%c",&str) != EOF ){ 
    /*while (1) {
        scanf("%c",&str);
        if ( str == EOF ) break; 
      ではあかんみたい 書き方が*/
    for ( int j = 0; j < 26; j++ ) {
      if ( str == 'a' + j || str == 'A' + j ) {
        alp[j]++;
      }
    }
  }
  for ( int i = 0; i < 26; i++ ) {
    printf ("%c : %d\n",'a' + i,alp[i]);
  }

} 
