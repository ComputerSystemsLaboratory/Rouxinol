#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)


int main() {
  int H;
  cin >> H;
  vector<int> node(H);
  for(int i = 0;i < H;i++){
      cin >> node.at(i);
  }

  for(int i = 0;i < H;i++){
      int v;
      v = node.at(i);

      cout << "node" << " " << (i+1) << ':' << " ";
      cout << "key" << " " << '=' << " " << (v) << ',' << " ";
      if (i != 0){
          cout << "parent key" << " " << '=' << " " << (node.at((i+1)/2 - 1)) << ',' << " ";
      }
      if ((i+1)*2 <= H){
          cout << "left key" << " " << '=' << " " << (node.at((i+1)*2-1)) << ',' << " ";
      }
      if ((i+1)*2 + 1 <= H){
          cout << "right key" << " " << '=' << " " << (node.at((i+1)*2)) << ',' << " ";
      }
      cout << endl;


  }
  
}
