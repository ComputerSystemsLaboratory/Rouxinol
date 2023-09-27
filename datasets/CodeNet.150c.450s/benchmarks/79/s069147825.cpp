#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
  int ocs[100], ods[100];
  for(int t = 1;; t++) {
    int n, r;
    cin >> n >> r;
    if(n == 0) break;
    int *cs = ocs;
    int *ds = ods;
    for(int i = 0; i < n; i++) {
      cs[i] = n - i;
    }
    for(int i = 0; i < r; i++) {
      int p, c;
      cin >> p >> c;
      for(int j = 0; j < c; j++) {
        ds[j] = cs[p - 1 + j];
      }
      for(int j = 0; j < p - 1; j++) {
        ds[j + c] = cs[j];
      }
      for(int j = c + p - 1; j < n; j++) {
        ds[j] = cs[j];
      }
      int *tmp = cs;
      cs = ds;
      ds = tmp;
    }
    cout << cs[0] << endl;
  }
  return 0;
}