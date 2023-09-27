#include <bits/stdc++.h>
using namespace std;

char buf[100];
const char *data[10];

int main() {
  data[0] = "";
  data[1] = ".,!? ";
  data[2] = "abc";
  data[3] = "def";
  data[4] = "ghi";
  data[5] = "jkl";
  data[6] = "mno";
  data[7] = "pqrs";
  data[8] = "tuv";
  data[9] = "wxyz";

  int t;
  scanf("%d", &t);
  while (t--) {
    scanf(" %s", buf);
    int n = strlen(buf);
    char c = '\0';
    string res;
    int idx = 0;
    for (int i=0; i<n; i++) {
      if (buf[i] == '0') {
        if (c != '\0') {
          res += c;
          c = '\0';
        }
        idx = 0;
      } else {
        c = data[buf[i]-'0'][idx++];
        if (c == '\0') {
          c = data[buf[i]-'0'][0];
          idx = 1;
        }
      }
    }

    printf("%s\n", res.c_str());
  }
}