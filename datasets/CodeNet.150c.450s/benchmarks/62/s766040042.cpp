#include <iostream>
using namespace std;

void swap (int *a, int *b) {
  int x;
  x = *a;
  *a = *b;
  *b = x;
  return;
}

int main (int argc, char **argv) {
  int n[3];
  cin >> n[0] >> n[1] >> n[2];

  // sort
  if (n[0] > n[1]) swap(&(n[0]), &(n[1]));
  if (n[1] > n[2]) swap(&(n[1]), &(n[2]));
  if (n[0] > n[1]) swap(&(n[0]), &(n[1]));

  cout << n[0] << " " << n[1] << " " << n[2] << endl;
}