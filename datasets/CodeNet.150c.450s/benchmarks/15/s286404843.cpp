/**
   <Linear Search>
   
   http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A
   
   Shunji Lin
   06/01/2016
**/

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

  std::vector<int> T;

  for (int i = 0; i < t; ++i) {
    int input;
    scanf("%d", &input);
    T.push_back(input);
  }

  for (int i = 0; i < t; ++i) {
    if ( S.find(T[i]) != S.end() ) ++count; // increment count if found in S
  }

  printf("%d\n", count);
}
    