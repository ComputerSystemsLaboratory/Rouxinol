#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
  int n, m, *a, t, p;

  while(1){
    cin >> n >> m >> p;
    if(n == 0 && m == 0 && p == 0){
      break;
    }
    a = (int *)calloc(n+1, sizeof(int));
    t = 0;
    for(int i = 1; i <= n; i++){
      cin >> a[i];
      t += a[i]*100;
    }
    if(a[m] == 0){
      cout << a[m] << endl;
      free(a);
      continue;
    }
    t -=(t*p/100);
    t /= a[m];
    cout << t << endl;

    free(a);
  }

  return 0;
}