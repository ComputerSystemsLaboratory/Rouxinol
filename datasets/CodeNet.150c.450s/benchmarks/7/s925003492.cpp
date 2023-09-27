#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> n;
  int temp;
  while (cin >> temp) {
    n.push_back(temp);
  }
  sort(n.begin(), n.end(), greater<int>());
  for (int i = 0; i < 3; i++) {
    printf("%d\n", n[i]);
  }
  return 0;
}