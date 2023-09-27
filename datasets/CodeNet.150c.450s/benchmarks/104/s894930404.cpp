#include <iostream>
#include <cstdio>

using namespace std;

void swap(int *var1, int *var2) {
  int tmp = *var1;
  *var1 = *var2;
  *var2 = tmp;
}

int main() {
  int w;
  int n;

  cin >> w;
  cin >> n;

  int vertical_line[w];
  for (int v_i = 0; v_i < w; v_i++)
    vertical_line[v_i] = v_i+1;

  for (int n_i = 0; n_i < n; n_i++) {
    int node1, node2;
    scanf("%d,%d", &node1, &node2);
    swap(vertical_line+node1-1, vertical_line+node2-1);    
  }

  for (int v_i = 0; v_i < w; v_i++)
    cout << vertical_line[v_i] << endl;

  return 0;
}