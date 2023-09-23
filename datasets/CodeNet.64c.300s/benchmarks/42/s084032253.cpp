#define times(n) for(int m_=0;m_<n;m_++)
#include <iostream>
using namespace std;

int main(){
  int n;
  while (1){
    cin >> n;
    if (!n) break;
    bool map[21][21];
    for (int a = 0; a < 21; a++)
      for (int b = 0; b < 21; b++)
	map[a][b] = false;
    
    int x, y;
    times(n){
      cin >> x >> y;
      map[y][x] = true;
    }
    x = 10, y = 10;
    cin >> n;
    times(n){
      char c;
      int w;
      cin >> c >> w;
      times(w){
	switch(c){
	case 'N': y++; map[y][x] = false; break;
	case 'S': y--; map[y][x] = false; break;
	case 'W': x--; map[y][x] = false; break;
	case 'E': x++; map[y][x] = false; break;
	}
      }
    }
    bool flag = false;
    for (int a = 0; a < 21; a++){
      for (int b = 0; b < 21; b++){
	if (map[a][b]) flag = true;
      }
    }
    if (flag) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
}