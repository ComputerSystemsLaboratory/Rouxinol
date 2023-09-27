#include <iostream>
 
using namespace std;
 
int posx, posy;
int takara[21][21];
 
int isTakara();
 
int main(void) {
  int a, b, n, m, temp, Tcnt;
  char ch;
 
  while(1) {
    cin >> n;
     
    if(n == 0) return 0;
 
    for(int i = 0; i < 21; i++) {
      for(int j = 0; j < 21; j++) {
    takara[i][j] = 0;
      }
    }
 
    posx = 10; posy = 10; Tcnt = 0;
 
    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      takara[a][b] = 1;
    }
 
    cin >> m;
 
    for(int j = 0; j < m; j++) {
      cin >> ch;
      cin >> temp;
 
      switch(ch) {
      case 'N':
    for(int i = 0; i < temp; i++) {
      posy++;
      if(isTakara() == 1) Tcnt++;
    }
    break;
 
      case 'E':
    for(int i = 0; i < temp; i++) {
      posx++;
      if(isTakara() == 1) Tcnt++;
    }
    break;
 
      case 'W':
    for(int i = 0; i < temp; i++) {
      posx--;
      if(isTakara() == 1) Tcnt++;
    }
    break;
 
      case 'S':
    for(int i = 0; i < temp; i++) {
      posy--;
      if(isTakara() == 1) Tcnt++;
    }
    break;
 
      }
 
    }
 
    if(Tcnt == n) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
 
  return 0;
}
 
int isTakara() {
 
  if(takara[posx][posy]) {
    takara[posx][posy] = 0;
    return 1;
  }
 
  return 0;
}