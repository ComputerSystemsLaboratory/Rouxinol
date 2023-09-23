#include <iostream>

using namespace std;

int main(void)
{
  int apart[4][3][10] = {0};
  int b, f, r, v;//?£??????????
  int n;
  int i, j, x;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> b >> f >> r >> v;
    apart[b-1][f-1][r-1] += v;
  }

  for(i = 0; i < 4; i++){ //?£??????????
    for(j =0; j < 3; j++){
      for(x = 0; x < 10; x++){
	cout << ' ' << apart[i][j][x];
      }
      cout << '\n';
    }
    if(i == 3) break;
    cout << "####################\n";
  }
  return 0;
}