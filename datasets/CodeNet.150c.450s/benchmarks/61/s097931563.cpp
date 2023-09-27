#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
  int n, a, b, c, x, s[10001], t, p;

  while(1){
    cin >> n >> a >> b >> c >> x;
    if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0){
      break;
    }

    for(int i = 0; i < n; i++){
      cin >> s[i];
    }
    t = p = 0;

    for(int i = 0; i < n && t < 10001; i++){
      while(t < 10001 && s[i] != x){
	x = (a*x+b)%c;
	t++;
      }
      if(i < n-1){
	x = (a*x+b)%c;
	t++;
      }
    }
    
    if(t < 10001){
      cout << t << endl;
    } else {
      cout << "-1" << endl;
    }
  }

  return 0;
}