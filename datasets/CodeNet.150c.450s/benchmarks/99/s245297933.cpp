#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  while(n--){
    string mcxi1, mcxi2;
    cin >> mcxi1 >> mcxi2;
    int dec1 = 0, dec2 = 0;
    int mlp = 1;
    for(int i = 0; i < mcxi1.size(); i++){
      if('0' <= mcxi1[i] && mcxi1[i] <= '9') mlp = (mcxi1[i] - '0');
      else {
	switch(mcxi1[i]){
	case 'm': dec1 += mlp * 1000; break;
	case 'c': dec1 += mlp * 100; break;
	case 'x': dec1 += mlp * 10; break;
	case 'i': dec1 += mlp; break;
	}
	mlp = 1;
      }
    }
    mlp = 1;
    for(int i = 0; i < mcxi2.size(); i++){
      if('0' <= mcxi2[i] && mcxi2[i] <= '9') mlp = (mcxi2[i] - '0');
      else {
	switch(mcxi2[i]){
	case 'm': dec2 += mlp * 1000; break;
	case 'c': dec2 += mlp * 100; break;
	case 'x': dec2 += mlp * 10; break;
	case 'i': dec2 += mlp; break;
	}
	mlp = 1;
      }
    }
    int add = dec1 + dec2;
    string tani = "mcxi";
    int idx = 0;
    for(int i = 1000; i > 0; i /= 10){
      if(add / i > 1) cout << add / i << tani[idx];
      else if(add / i == 1) cout << tani[idx];
      add %= i;
      idx++;
    }
    cout << endl;
  }
  return 0;
}