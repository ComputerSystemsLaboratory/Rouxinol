#include <iostream>
#include <string>
using namespace std;

int q;
string x, y;
int memo[1000][1000];

void init(){
  for(int i = 0; i < x.size(); i++){
    for(int j = 0; j < y.size(); j++){
      memo[i][j] = -1;
    }
  }
}

int lcs(int xp, int yp){
  if(xp < 0 || yp < 0) return 0;
  if(memo[xp][yp] >= 0) return memo[xp][yp];

  if(x[xp] == y[yp]){
    return memo[xp][yp] = lcs(xp - 1, yp - 1) + 1;
  }else{
    return memo[xp][yp] = max(lcs(xp - 1, yp), lcs(xp, yp - 1));
  }
}

int main(void){
  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> x >> y;
    init();
    cout << lcs(x.size() - 1, y.size() - 1) << endl;
  }
  return 0;
}