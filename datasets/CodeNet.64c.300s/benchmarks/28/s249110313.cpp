#include <bits/stdc++.h>
using namespace std;
int main() {
int W, H, x, y, r; 
cin >> W >> H >> x >> y >> r; 
if(x >= 0 && x <= W - r && y >= 0 && y <= H-r)
  cout << "Yes" << endl;  
else
  cout << "No" << endl;  
}
