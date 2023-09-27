#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  while(!feof(stdin)) {
    int n;
    double sum=1;
    scanf("%d", &n);
    if (feof(stdin)) break;
    for(int i=1;i<=n;i++)
      sum*=i;
    printf("%.0f\n", sum);
  }
}