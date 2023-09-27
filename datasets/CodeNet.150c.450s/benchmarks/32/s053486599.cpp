#include <iostream>
using namespace std;

int main(){
  int m,nmin,nmax,p[200],gmax,n;
  while (1){
    cin >> m >> nmin >> nmax;
    if (m==0&&nmin==0&&nmax==0)return 0;
    for (int i=0;i<m;i++)cin >> p[i];
    gmax=-1;
    n=0;
    for (int i=nmax;i>=nmin;i--)
      if (p[i-1]-p[i]>gmax){
	n=i;
	gmax=p[i-1]-p[i];
      }
    cout << n << endl;
  }
  return 0;
}