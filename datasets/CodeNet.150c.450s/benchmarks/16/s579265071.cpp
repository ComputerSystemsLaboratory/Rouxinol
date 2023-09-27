#include <iostream>
#include <cstdio>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  stack<int> S1;
  stack<pair<int,int> > S2;
  char ch;
  int A=0;
  for (int i=0; cin >> ch; i++) {
    if (ch=='\\') {
      S1.push(i);
    } else if (ch=='/' && S1.size()>0) {
      int j=S1.top();
      S1.pop();
      A+=i-j;
      int a=i-j;
      while (S2.size()>0 && S2.top().first>j) {
	a+=S2.top().second;
	S2.pop();
      }
      S2.push(make_pair(j,a));
    }
  }
  vector<int> L;
  while (S2.size()>0) {
    L.push_back(S2.top().second);
    S2.pop();
  }
  reverse(L.begin(),L.end());
  printf("%d\n",A);
  printf("%d",L.size());
  for (int k=0; k<L.size(); k++) {
    printf(" %d",L[k]);
  }
  printf("\n");
  return 0;
}