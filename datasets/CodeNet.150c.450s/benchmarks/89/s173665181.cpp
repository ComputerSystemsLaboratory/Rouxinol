#include <iostream>
#include <cstring>
using namespace std;
bool t[1000000];
int main()
{
  memset(t,true,sizeof(t));
  t[0] = false;
  t[1] = false;
  for(int i=4; i<1000000; i+=2){
    t[i] = false;
  }
  for(int i=3; i*2<1000000; i+=2){
    if(!t[i]) continue;
    for(int j=i*2; j<1000000; j+=i){
      t[j] = false;
    }
  }
  for(;;){
    int a,d,n;
    cin >> a >> d >> n;
    if(a == 0 && d == 0 && n == 0) break;
    for(;;){
      if(t[a]) n--;
      if(n == 0){
        cout << a << endl;
        break;
      }
      a += d;
    }
  }
  return 0;
}