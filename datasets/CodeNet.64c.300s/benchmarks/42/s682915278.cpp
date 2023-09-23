#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
bool f[22][22];
char c[] = {"NESW"};
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int main(void)
{
  while(1){
    cin >> n;
    if(!n) break;
    memset(f,false,sizeof(f));
    for(int i = 0; i < n; i++){
      int x,y;
      cin >> x >> y;
      f[x][y] = true;
    }
    cin >> m;

    int x = 10;
    int y = 10;
    int ret = 0;
    for(int i = 0; i < m; i++){
      char d;
      int l;
      cin >> d >> l;
      for(int j = 0; j < 4; j++){
	if(d != c[j]) continue;
	for(int k = 0; k < l; k++){
	  x += dx[j];
	  y += dy[j];
	  if(f[x][y]){
	    ret++;
	    f[x][y] = false;
	  }
	}
      }
    }
    cout << ((ret == n)?"Yes":"No") << endl;
  }
}