#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MD 1000000007

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, n, m, f, r;
  char g;

  while(true) {
    cin>>m>>f>>r;
    if (m==-1&&f==-1&&r==-1) break;
    if (m==-1||f==-1) g = 'F';
    else if (m + f >= 80) g = 'A';
    else if (m + f >= 65) g = 'B';
    else if (m + f >= 50 || (m + f >= 30 && r >= 50)) g = 'C';
    else if (m + f >= 30) g = 'D';
    else g = 'F';
    cout << g << endl;
  }
  
  return 0;
}
  