#include <bits/stdc++.h>

using namespace std;

#define repl(i,a,b) for(int i=(int)a;i<(int)b;i++)
#define rep(i,n) repl(i,0,n)
#define maxch(a,b) a=max(a,b)

int n, p;
int c[50];

int main(int argc, char const *argv[])
{
  while(cin >> n >> p, n | p){
    memset(c, 0, sizeof(c));
    int cnt = 0, turn = 0;
    int tmp = p;
    while(true) {
      if (p > 0) {
        c[turn]++;
        p--;
        if(tmp == c[turn]) break; 
      } else {
        p = c[turn];
        c[turn] = 0;
      }
      cnt++;
      turn = (turn + 1) % n;
    }

    cout << turn << endl;
  }
  return 0;
}