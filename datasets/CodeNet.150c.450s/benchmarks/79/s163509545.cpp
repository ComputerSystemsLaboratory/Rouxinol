#include <iostream>
#include <algorithm>
using namespace std;

void show(int* x, int n);

int main()
{
  int n=0, r=0;
  while(cin >> n >> r && n > 0){
    int cards[n];
    for(int i=0; i<n; i++){
      cards[i] = n-i;
    }
    for(int i=0; i<r; i++){
      int p, c;
      cin >> p >> c;
      rotate(cards, cards + p - 1, cards + p + c - 1);
    }
    cout << cards[0] << endl;
  }
}