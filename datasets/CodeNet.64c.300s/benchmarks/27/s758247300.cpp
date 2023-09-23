#include<iostream>
#include<string.h>

#define MAX_SIZE 298

using namespace std;

int main(void) {
  int table[MAX_SIZE];
  int x, n;

  while(true) {
    cin >> n;
    cin >> x;
    if(n == 0 && x == 0) {
      break;
    }
    else {
      memset(table, 0, sizeof(table));
      for(int i = 1; i <= n - 2; i++) {
        for(int j = i + 1; j <= n - 1; j++) {
          for(int k = j + 1; k <= n; k++) {
            table[i + j + k]++;
          }
        }
      }
      cout << table[x] << endl;
    }
  }
  return 0;
}