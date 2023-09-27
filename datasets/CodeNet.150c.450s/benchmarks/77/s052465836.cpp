#include <iostream>
#include <cstring>
using namespace std;
bool s[21][21];
int e[4][2] = {
  { 0,1 }, { 1,0 }, { 0,-1 }, { -1,0 },
};
int main()
{
  int n,x,y,m,i,j;
  char d;
  for(;;){
    cin >> n;
    if(n==0)break;
    memset(s,0,sizeof(s));
    for(j=0;j<n;j++){
      cin >> x >> y;
      s[y][x] = true;
    }
    cin >> m;
    x = y = 10;
    if(s[y][x]) {
      s[y][x] = false;
      n--;
    }
    for(j=0;j<m;j++){
      cin >> d >> i;
      switch(d){
      case 'N': d = 0; break;
      case 'E': d = 1; break;
      case 'S': d = 2; break;
      case 'W': d = 3; break;
      }
      while(i--){
	x += e[d][0];
	y += e[d][1];
	if(s[y][x]) {
	  s[y][x] = false;
	  n--;
	}
      }
    }
    if(n) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  return 0;
}