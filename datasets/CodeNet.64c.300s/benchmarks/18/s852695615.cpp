#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
  int n;
  int a[31]={0};

  a[0] = 1, a[1] = 1, a[2] = 2;
  

  /* a[i] Í@iiÚÉ©©éêÌ */
  for(int i = 3 ; i <= 30 ; i++)
    {
      a[i] = a[i-1] + a[i-2] + a[i-3];
    }
  
  while(cin >> n)
    {
      if(n == 0) break;
      cout << (a[n] / 10 / 365 + 1) << endl;
      // êúPOÅÁÄANÈÌÅRUTÅéBPúÅàêNvZÈÌÅPð«·
    }
  return 0;
}