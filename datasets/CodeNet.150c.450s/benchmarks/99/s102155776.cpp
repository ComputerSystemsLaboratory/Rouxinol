#include <iostream>
#include <cctype>
using namespace std;


char const ch[4] = {'m', 'c', 'x', 'i'};
int const d[4] = {1000, 100, 10, 1};

int sptoi(char*s)
{
  int num = 1, ans = 0;
  while(*s) {
    for (int i = 0; i < 4; i++)
      if (*s == ch[i])
        ans += d[i] * num;
    
    if (isdigit(*s))
      num = *s - '0';
    else
      num = 1;
    
    s++;
  }
  return ans;
}


int main()
{
  int N;
  cin >> N;
  while (N--) {
    char sp1[10], sp2[10];
    cin >> sp1 >> sp2;

    int sum = sptoi(sp1) + sptoi(sp2);

    char sp[10];
    for (int i = 0; i < 4; i++) {
      int x = sum / d[i];
      sum %= d[i];

      if (x >= 2)
        cout << x;
      if (x >= 1)
        cout << ch[i];
    }
    cout << endl;
  }
    
}