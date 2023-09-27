#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int i, crdnum, pleft = 0, pright = 0;
  string cleft, cright;
  cin >> crdnum;
  for (i = 0; i < crdnum; i++) {
    cin >> cleft >> cright;
    if (cleft > cright) pleft += 3;
    else if (cleft < cright) pright += 3;
    else {
      pleft += 1;
      pright += 1;
    }
  }
  cout << pleft << " " << pright << endl;
  return 0;
}