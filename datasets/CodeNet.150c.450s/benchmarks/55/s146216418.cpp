#include<cstdio>
#include<cstring>

int main() {
  char ch1[1001];
  int A[1001] = {};
  
  for( int i = 0; i <1001; i++) {
    scanf("%s", ch1);
    if( ch1[0] == '0') break;
    for( int j = 0; 1; j++) {
      if( ch1[j] == '\0') break;
      A[i] += ch1[j] - '0';
    }
  }
 
  for( int i = 0; 1; i++) {
    if( A[i] == '\0') break;
    printf("%d\n", A[i]);
  }

  return 0;
}