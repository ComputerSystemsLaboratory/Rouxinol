#include <iostream>
using namespace std;


int main(){
  int verticals,horizontals,a,b;
  char comma; //commaを抜くための変数
  cin >> verticals;
  cin >> horizontals;

  int res[verticals];
  for(int i=0;i<verticals;i++) res[i] = i+1;
  for(int i=0;i<horizontals;i++){
    cin >> a >> comma >> b;   
    int tmp = res[a-1];
    res[a-1] = res[b-1];
    res[b-1] = tmp;
  }
  for(int i=0;i<verticals;i++) cout << res[i] << endl;
}