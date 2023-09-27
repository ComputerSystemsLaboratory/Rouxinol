#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){

  int n;
  bool d[100][100]; //x,y
  int x,y;
  int p;
  char c;

  while(cin >> n, n){

    memset(d,false,sizeof(d));

    while(n--){
      cin >> x >> y;
      d[x][y] = true;
    }

    x = y = 10;
    cin >> n;
    while(n--){
      cin >> c >> p;
      
	for(int i=0;i<p;i++){
	  if(c == 'N') y++;
	  if(c == 'E') x++;
	  if(c == 'W') x--;
	  if(c == 'S') y--;

	  if(d[x][y]) d[x][y] = false;
	}
    }

    bool ans = true;
 
    for(int i=0;i<100;i++){
      for(int j=0;j<100;j++){
	if(d[i][j]) ans = false;
      }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}