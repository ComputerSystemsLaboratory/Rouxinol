#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

void print(vector<int> v, char mark)
{
  for (int i = 1; i < 14; ++i) {
    if (!v[i]) {
      fprintf(stdout, "%c %d\n", mark, i);
    }
  }
}

int main()
{
  vector<int> spade(14, 0), heart(14, 0), club(14, 0), dia(14, 0);
  int n;
  fscanf(stdin, "%d\n", &n);
  for (int i = 0; i < n; ++i) {
    char mark;
    int num;
    if (i < n - 1) {
      fscanf(stdin, "%c %d\n", &mark, &num);
    }
    else {
      fscanf(stdin, "%c %d", &mark, &num);
    }
    if (mark == 'S') { spade[num] = 1; }
    else if (mark == 'H') { heart[num] = 1; }
    else if (mark == 'C') { club[num] = 1; }
    else if (mark == 'D') { dia[num] = 1; }
  }
  print(spade, 'S');
  print(heart, 'H');
  print(club, 'C');
  print(dia, 'D');
  return 0;
}