#include<cstdio>

int StLn(char *s); //my strlen
void StrStr(char *p, char *circle);

int main() {
  char s[101], p[101] = { '0' }, circle[201] = { '0' };

  scanf("%s %s", s, p);
  sprintf(circle, "%s%s", s, s);
  //printf("circle = %s\n", circle);
  StrStr(p, circle);
  return 0;
}

int StLn(char *s) {
  int c = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    c++;
  }
//printf ("c=%d\n",c);
  return c; //return 0に注意
}

void StrStr(char *p/*探す文字列*/, char *circle/*この文字列の中から探す*/) {
  for (int i = 0; i < StLn(circle); i++) {//探す対象の全域を探索する
    int j = 0;

    for (j = 0; ( j < StLn(p) && p[j] == circle[i + j] ); j++);
    //条件合わないとj==StLn(p)にならず終わる

    if (j == StLn(p)) {
    //一致した時
      printf("Yes\n");
       return;
    }  
    
  }
  printf("No\n");

}
