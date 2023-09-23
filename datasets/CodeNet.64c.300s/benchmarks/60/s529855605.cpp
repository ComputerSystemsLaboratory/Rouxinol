#include<bits/stdc++.h>
using namespace std;

int a, b, n;
int field[20][20];
bool nothough[20][20];
int main()
{
  while(cin >> a >> b && (a || b)){
    memset(nothough, false, sizeof nothough);
    memset(field, 0, sizeof field);
    cin >> n;
    for(int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      nothough[x][y] = true;
    }

    field[1][1] = 1;
    for(int i = 1; i <= a; i++)
      for(int j = 1; j <= b; j++)
	if(!nothough[i][j])
	  field[i][j] += field[i - 1][j] + field[i][j - 1];
  
    cout << field[a][b] << endl;
  }
  return 0;
}