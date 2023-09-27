#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int a, b, c, d, e, f,	g, h;
  cin >> a >> b >> c >> d >> e >> f >> g >> h;
  if(a + b + c + d > e + f + g + h)
    printf("%d\n", a + b + c + d);
  else
    printf("%d\n", e + f + g + h);

  return 0;
}