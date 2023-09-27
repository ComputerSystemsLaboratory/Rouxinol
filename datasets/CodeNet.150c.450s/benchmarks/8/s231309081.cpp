#include <iostream>
#include <string>

using namespace std;

int main(){
  int n, tp = 0, hp = 0;
  cin >> n;
  while (n) {
    n--;
    string ts, hs;
    cin >> ts >> hs;
    if (ts == hs) tp++, hp++;
    else if (ts > hs) tp += 3;
    else hp += 3;
  }
  cout << tp << " " << hp << endl;
  return 0;
}