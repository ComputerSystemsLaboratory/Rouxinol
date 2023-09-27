#include <iostream>

using namespace std;

int main() {
  int n;
  char ch[256];
  
  while(1) {
    for (int i=0; i<256; i++)
      ch[i]=i;
  
    cin >> n;
    
    if (n==0)
      break;

    for (int i=0; i<n; i++) {
      char a, b;
      cin >> a >> b;
      ch[a]=b;
    }
    int m;
    cin >> m;
    
    for (int i=0; i<m; i++) {
      char tmp;
      cin >> tmp;
      cout << ch[tmp];
    }
    cout << endl;
  }
}