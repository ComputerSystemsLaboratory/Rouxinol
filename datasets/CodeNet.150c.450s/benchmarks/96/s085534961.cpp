#include <cstdio>
#include <cstring>

const char tbl[][6] = {
  ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
};

int main() {
  char s[1025], ans[77];
  int n;
  scanf("%d", &n);
  for (int i=0;i<n;i++) {
    scanf("%s", s);
    int ai = 0, tt = -1, ti = -1;
    for (int j=0;s[j]!='\0';j++) {
      if (s[j] == '0') {
        if (tt >= 0) {
          ans[ai++] = tbl[tt][ti];
          tt = ti = -1;
        }
      } else {
        tt = s[j]-'1';
        ti = (++ti)%strlen(tbl[tt]);
      }
    }
    ans[ai] = '\0';
    printf("%s\n", ans);
  }
  return 0;
}