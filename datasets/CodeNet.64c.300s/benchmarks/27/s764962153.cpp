#include <iostream>
using namespace std;

int main(void)
{
  int n,x,y,i,j,k=0,l=0,m=0;
  int a[101],b[101];


  m=1;
  do{
    cin >> n >> x;
    a[m] = n;  b[m] = x;
    m = m+1;
  }while(n != 0 || x != 0);

  for(k = 1; k < m-1; k++){
    n = a[k];  x = b[k];
    l = 0;
    for(i = 1; i <= n-2; i++){
      for(j = i+1; j <= n-1; j++){
        y = x-j-i;
        if(y > j && y <= n) {
          l = l+1;
        }
      }
    }
    cout << l << endl;
  }

  return 0;
}