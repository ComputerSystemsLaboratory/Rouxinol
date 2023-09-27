#include <iostream>

using namespace std;

int m[124][124] = {{}};
int p[124] = {};
int n;

void chain(){
  for(int i = 0 ;i < n;i++) m[i][i] = 0;
  for(int l = 2;l <= n;l++){
    for(int i = 1 ;i <= n - l + 1;i++){
      int j = i + l - 1;
      m[i][j] = (1 << 21);
      for(int k = i;k <= j;k++){
        m[i][j] = min(m[i][j],m[i][k] + m[k + 1][j] + p[i - 1] *p[k] *p[j]);
      }
    }
  }

  cout << m[1][n] << endl;

}


int main(){

  cin >> n;

  for(int i = 1;i <= n;i++){
    cin >> p[i - 1] >> p[i];
  }

  chain();

}