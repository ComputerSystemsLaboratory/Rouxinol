// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2015

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cassert>
using namespace std;

int table[2][1510][1510];
int habas[2][1500010];

int main() {
  int N[2];
  while (scanf("%d%d", &N[0], &N[1]) != EOF && N[0]) {
    fill(&table[0][0][0], &table[0][0][0]+2*1510*1510, 0);
    fill(&habas[0][0], &habas[0][0]+2*1500010, 0);
    for (int k=0; k<2; k++) {
      for (int i=1; i<=N[k]; i++) {
	int hw;
	scanf("%d", &hw);
	table[k][i][i] = hw;
	habas[k][hw]++;
      }
      for (int i=1; i<=N[k]; i++) {
	for (int j=1; j<i; j++) {
	  table[k][j][i] = table[k][j][i-1] + table[k][i][i];
	  habas[k][table[k][j][i]]++;
	}
      }
    }
    int ans = 0;
    for (int i=0; i<1500010; i++) {
      ans += habas[0][i] * habas[1][i];
    }
    printf("%d\n", ans);
  }
}