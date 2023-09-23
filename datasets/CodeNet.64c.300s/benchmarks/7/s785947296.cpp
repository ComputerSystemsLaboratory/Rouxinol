#include<iostream>
#include<cstdio>
using namespace std;

int main() {

  int card[13 * 4] = {0};

  // ????????????????????????????????????????????????
  int n;
  cin >> n;
  for(int i = 0 ; i < n; i++) {
    char op;
    int op_int;
    int num;
    cin >> op >> num;
    if (op == 'S') op_int = 0;
    if (op == 'H') op_int = 1;
    if (op == 'C') op_int = 2;
    if (op == 'D') op_int = 3;
    card[op_int * 13 + num - 1] += 1;
  }

  for(int i = 0 ; i < 13 * 4; i++) {
    if (card[i] == 0 ) {
      char op;
      int op_int = i / 13;
      int num = i % 13;
      if (op_int == 0) op = 'S';
      if (op_int == 1) op = 'H';
      if (op_int == 2) op = 'C';
      if (op_int == 3) op = 'D';

      cout << op << " " << num + 1 << endl;
    }
  }


}