#include <cstdio>
#define rep(i,n) for(int i=0; i<(n); ++i)
#define outl(x) cout<< (x) << '\n'
using namespace std;

signed main()
{
   char s[1205];
   fgets( s, sizeof(s), stdin );
   for(int i=0; s[i] != 0; ++i)
      if( (s[i] >= 'a' && s[i] <= 'z') ||( s[i] >= 'A' && s[i] <= 'Z') )
         s[i] ^= 32;
   printf("%s", s);
}


