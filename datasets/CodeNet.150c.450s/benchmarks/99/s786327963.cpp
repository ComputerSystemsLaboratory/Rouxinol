#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


int solve(char a[10], char b[10])
{
  int x = 0;
  int y = 0;
  int tmp;
  for(int i = 0; i <= strlen(a); i++){
    //a    
    if(a[i] == 'm'){
      if(i == 0){
	x += 1000;
      }
      else{
	tmp = a[i - 1] - '0';
	x += tmp * 1000;
      }
    }

    if(a[i] == 'c'){
      if(i == 0 || a[i - 1] == 'm'){
        x += 100;
      }
     else{
	tmp = a[i - 1] - '0';
	x += tmp * 100;
      }
    }

    if(a[i] == 'x'){
      if(i == 0 || a[i - 1] == 'm' || a[i - 1] == 'c'){
        x += 10;
      }
     else{
	tmp = a[i - 1] - '0';
	x += tmp * 10;
      }
    }

    if(a[i] == 'i'){
      if(i == 0 || a[i - 1] == 'm' || a[i - 1] == 'c' || a[i - 1] == 'x'){
        x += 1;
      }
     else{
	tmp = a[i - 1] - '0';
	x += tmp;
      }
    }
  }
    for(int i = 0; i <= strlen(b); i++){
    //b
    if(b[i] == 'm'){
      if(i == 0){
	y += 1000;
      }
      else{
	tmp = b[i - 1] - '0';
	y += tmp * 1000;
      }
    }

    if(b[i] == 'c'){
      if(i == 0 || b[i - 1] == 'm'){
        y += 100;
      }
     else{
	tmp = b[i - 1] - '0';
	y += tmp * 100;
      }
    }

    if(b[i] == 'x'){
      if(i == 0 || b[i - 1] == 'm' || b[i - 1] == 'c'){
        y += 10;
      }
     else{
	tmp = b[i - 1] - '0';
	y += tmp * 10;
      }
    }

    if(b[i] == 'i'){
      if(i == 0 || b[i - 1] == 'm' || b[i - 1] == 'c' || b[i - 1] == 'x'){
        y += 1;
      }
     else{
	tmp = b[i - 1] - '0';
	y += tmp;
     }
    }
  }
 
  return x + y;
}


void out(int ans)
{
  int m, c, x, i;

  m = ans / 1000;
  c = (ans - m * 1000) / 100;
  x = (ans - m * 1000 - c * 100) / 10;
  i = ans - m * 1000 - c * 100 - x * 10;


  if(m == 1) cout << "m";
  if(m - 1 > 0) cout << m << "m";

  if(c == 1) cout << "c";
  if(c - 1 > 0) cout << c << "c";

  if(x == 1) cout << "x";
  if(x - 1 > 0) cout << x << "x";

  if(i == 1) cout << "i";
  if(i - 1 > 0) cout << i << "i";

  cout << endl;
}


int main()
{
  int n;
  char a[10], b[10];
  int ans;
  scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%s %s", a, b);

      ans = solve(a, b);
      //cout << ans << endl;
      out(ans);
    }
  return 0;
}