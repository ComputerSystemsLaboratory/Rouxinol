#include<cstdio>
#include<iostream>
using namespace std;

int main() {
  int a, b, c;
  string result;

  scanf("%d %d %d", &a, &b, &c);

  if (a < b && b < c) {
    result = "Yes";
  } else {
    result = "No";
  }


  printf("%s\n", result.c_str());
}

