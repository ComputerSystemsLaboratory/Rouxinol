 #include <stdio.h>
using namespace std;
long long int n,m,ans,amari,ahokusa;

 int main()
 {
    while(scanf("%lld%lld",&n,&m) != -1)
    {
         ans  = n*m;
         if(n < m)
         {
             ahokusa = n;
             n = m;
             m = ahokusa;
         }
         amari = n % m;
         while(amari != 0)
         {
            n = m;
            m = amari;
            amari = n % m;
         }
         ans = ans / m;
         printf("%lld %lld\n",m,ans);
    }

     return 0;

 }