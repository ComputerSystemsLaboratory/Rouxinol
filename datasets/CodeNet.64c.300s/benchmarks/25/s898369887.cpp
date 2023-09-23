#include <iostream>

using namespace std;

int hit, brow;

void op(int a[4], int b, int i)
{
  for (int j = 0; j < 4; j++){
    if (b == a[j] && i == j){
      hit++;
    }
    else if (b == a[j] && i != j){
      brow++;
    }
  }
}

int main()
{
  int a[4], b[4];
  int i;
  
  while (cin >> a[0] >> a[1] >> a[2] >> a[3]){
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    hit = brow = 0;
    for (i = 0; i < 4; i++){
      op(a, b[i], i);
    }
    
    cout << hit << " " << brow << endl;
  }
}