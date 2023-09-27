#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n;
  while(cin >> n , n){
    char dic[256];
    fill(dic , dic + 256 , 0);
    for(int i = 0; i < n; i++){
      char c;
      cin >> c;
      cin >> dic[c];
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
      char c;
      cin >> c;
      if(dic[c] == 0){
        cout << c;
      } else {
        cout << dic[c];
      }
    }
    cout << endl;
  }
  return 0;
}