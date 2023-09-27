#include<stdio.h>
#include<stack>
#include<vector>

using namespace std;

int main() {
  int sum = 0;
  char c;
  stack<int> A;
  stack<pair<int, int> > S;

  for( int i = 0; scanf("%c", &c) != EOF; i++ ) {
    if (c == '\\') A.push(i);
    else if ( c == '/') {
      if (A.empty()) continue;
      int corressponding = A.top(); A.pop();
      int cv = i - corressponding;
      sum += cv;
      while(!S.empty() && S.top().first > corressponding) {
        cv += S.top().second;
        S.pop();
      }
      S.push(make_pair(corressponding, cv));
    }
  }

  printf("%d\n", sum);

  vector<int> B;
  while(!S.empty()) {
    B.push_back(S.top().second);
    S.pop();
  }

  printf("%lu", B.size());

  for(vector<int>::reverse_iterator ri = B.rbegin(); ri != B.rend(); ++ri ) {
    printf(" %d", *ri);
  }

  printf("\n");

  return 0;
}

