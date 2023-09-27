#include<cstdio>
#include<cstring>

int main(){
  char str[1001]; //1000桁long longでも不可
  
  while(1){
    scanf("%s", str);
    if ( str[0] == '0' ) break;
    int sum = 0;
    for ( int i = 0; str[i] != '\0'; i++ ) { //終端文字
      sum += str[i] - '0';
    }
    printf ("%d\n", sum);
  }
  
  return 0;
}
