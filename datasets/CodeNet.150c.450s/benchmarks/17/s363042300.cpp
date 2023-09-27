#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> num(5);
  scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

  sort(num.begin(),num.end(),greater<int>());

  printf("%d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4]);
  return EXIT_SUCCESS;
}