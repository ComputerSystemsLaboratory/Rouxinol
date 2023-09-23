#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int i,m,s,e,x,y;

  cin >> i >> m >> s >> e;

  x = i + m + s + e;

  cin >> i >> m >> s >> e;

  y = i + m + s + e;

  cout << max(x,y) << endl;

}