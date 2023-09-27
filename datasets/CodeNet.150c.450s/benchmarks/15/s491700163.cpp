#include <cstdio>
#include <set>

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

  for (int i = 0; i < t; ++i) {
    int input;
    scanf("%d", &input);
    if ( S.find(input) != S.end() ) ++count; // increment count if found in S
  }

  printf("%d\n", count);
}
    