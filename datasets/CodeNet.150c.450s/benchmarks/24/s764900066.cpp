#include <iostream>

using namespace std;

int main(){
  int i,n,m,di,pi,o;
  int p[11];
  for (i=0;i<11;i++)
    p[i] = 0;
  while(true){
    cin >> n >> m;
    if (n == 0)
      break;
    for (i = 0;i<n;i++){
      cin >> di >> pi;
      p[pi] += di;
    }
    i = 10;
    while(i>=0){
      if (p[i] > m){
	p[i] -= m;
	break;
      }
      else{
	m -= p[i];
	p[i] = 0;
      }
      i--;
    }
    o = 0;
    for(i=0;i<=10;i++){
      o += i*p[i];
      p[i] = 0;
    }
    cout << o << endl;
  }
  return 0;
}