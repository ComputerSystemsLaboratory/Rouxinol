#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(void)
{
  int i,j,k,m[101],n[101],h[101][101];
  string s[101]={},sf,st;

  k = 1;
  do{
    cin >> s[k];
    m[k] = s[k].size();
    if(s[k] == "-")
      break;
    cin >> n[k];
    for(i = 1; i <= n[k]; i++)
      cin >> h[k][i];
    k = k + 1;
  }while(1);

  for(i = 1; i <= k-1; i++){
//    cout << i << " : " << s[i] << endl;
    for(j = 1; j <= n[i]; j++){
      st = s[i].substr(0,h[i][j]);
      sf = s[i].substr(h[i][j],m[i]-h[i][j]);
      s[i] = sf + st;
//      cout << " " << j << " " << s[i] << endl;
    }
    cout << s[i] << endl;
  }

  return 0;
}