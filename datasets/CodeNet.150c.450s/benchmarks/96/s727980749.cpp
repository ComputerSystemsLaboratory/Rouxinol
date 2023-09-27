#include<cstdio>
using namespace std;

int n;
char s[1030];
char list[9] = {'a', 'd', 'g', 'j', 'm', 'p', 't', 'w'};
char one[5] = {'.', ',', '!', '?', ' '};

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", s);
    char count = -1;
    bool flag = false;
    for (int j = 0; s[j] != 0; j++) {
      if (s[j] == '0') {
        if (!flag) continue;
        if (s[j-1] == '1') printf("%c", one[count % 5]);
        else if (s[j-1] == '7' || s[j-1] == '9') printf("%c", list[s[j-1] - '2'] + count % 4);
        else printf("%c", list[s[j-1] - '2'] + count % 3);
        flag = false;
        count = -1;
      } else {
        flag = true;
        count++;
        if (count == 60) count = 0;
      }
    }
    printf("\n");
  }
}

