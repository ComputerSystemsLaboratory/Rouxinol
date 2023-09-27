#include <cstdio>
#include <set>
#include <vector>

int main()
{
  int s, t; //number of integers for S and T

  int count = 0; // number of integers of T in S
  
  std::set<int> S; // set S to be checked against

  scanf("%d", &s);
  
  for (int i = 0; i < s; ++i) {
    int input;
    scanf("%d", &input);
    S.insert(input);
  }

  scanf("%d", &t);

  std::vector<int> T (t, 0);

  for (int i = 0; i < t; ++i) {
    int input;
    scanf("%d", &input);
    T[i] = input;
  }

  for (int i = 0; i < t; ++i) {
    if ( S.count (T[i]) ) ++count; // increment count if found in S
  }

  printf("%d\n", count);
}
    