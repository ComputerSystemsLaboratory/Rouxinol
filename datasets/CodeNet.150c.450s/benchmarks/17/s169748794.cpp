#include<iostream>
using namespace std;

int main(){
  int a, b, c, d, e, f, g, h, i;
  cin >> a >> b >> c >> d >> e;

  if(a > b) f = a, a = b;
  else f = b;

  if(a > c) g = f, f = a, a = c;
  else if(a <= c && c < f) g = f, f = c;
  else g = c;

  if(a > d)  h = g, g = f, f = a, a = d;
  else if(a <= d && d < f) h = g, g = f, f = d;
  else if(f <= d && d < g) h = g, g = d;
  else h = d;

  if(a > e) i = h, h = g, g = f, f = a, a = e;
  else if(a <= e && e < f) i = h, h = g, g = f, f = e;
  else if(f <= e && e < g) i = h, h = g, g = e;
  else if(g <= e && e < h) i = h, h = e;
  else i = e;

  cout << i << " " << h << " " << g << " " << f << " " << a << endl;

  return 0;
}