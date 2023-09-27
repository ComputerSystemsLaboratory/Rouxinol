#include <cstdio>
#include <map>
#include <string>
#include <vector>

std::string mcxi(int n) {
  std::string res;
  if (n / 1000 > 0) {
    if (n / 1000 > 1) res += std::to_string(n / 1000);
    res += 'm';
    n %= 1000;
  }
  if (n / 100 > 0) {
    if (n / 100 > 1) res += std::to_string(n / 100);
    res += 'c';
    n %= 100;
  }
  if (n / 10 > 0) {
    if (n / 10 > 1) res += std::to_string(n / 10);
    res += 'x';
    n %= 10;
  }
  if (n > 0) {
    if (n > 1) res += std::to_string(n);
    res += 'i';
  }
  return res;
}

int main() {
  std::map<std::string, int> dec;
  std::vector<std::string> enc(10000);

  for (int i = 1; i < 10000; ++i) {
    std::string s = mcxi(i);
    dec[s] = i;
    enc[i] = s;
  }

  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    char buf[16];
    scanf("%s", buf);
    int a = dec[buf];
    scanf("%s", buf);
    int b = dec[buf];
    printf("%s\n", enc[a+b].c_str());
  }
}

