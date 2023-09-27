#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int s,l,k,j,i;
  string n,m[1001]={};
  k = 0;
  do{
    k = k+1;
    cin >> n;
    m[k] = n;
  }while(n != "0");

  j = k-1;
  for(k = 1; k <= j; k++){
    i = m[k].size();
    s = 0;
    for(l = 0; l<=i-1; l++)
      s = s + (m[k][l]-'0');
    cout << s <<  endl;
  }
  return 0;
}