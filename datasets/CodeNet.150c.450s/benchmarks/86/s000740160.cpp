#include <iostream>

using namespace std;

int main(){
  int c,n,m,p,s,sum;
  while(true){
    cin >> n >> m >> p;
    if (n==0)
      break;
    sum = 0;
    for (int i=0;i<n;i++){
      cin >>s;
      sum += s;
      if (i == m-1)
	c = s;
    }
    if (c)
      cout << sum*(100-p)/c << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}