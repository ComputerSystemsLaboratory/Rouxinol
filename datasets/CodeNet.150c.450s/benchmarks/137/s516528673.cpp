#include <cstdio>
using namespace std;

int mp[128];
bool dic[ 2 + 1 << 24 ];

int encode(const char s[])
{
   int ret = 1;
   for(int i=0; s[i] != '\0'; ++i){
      ret <<= 2;  // *= 4;
      ret += mp[ s[i] ];
   }
   return( ret );
}

int main()
{
   mp['C'] = 1,
   mp['G'] = 2,
   mp['T'] = 3;
   int N;
   char com[8], str[16];
   scanf("%d", &N);

   while(N--){
      scanf("%s %s", com, str);
      if(com[0] == 'i')
         dic[ encode(str) ] = true;
      else
         puts( dic[ encode(str) ] ? "yes": "no" );
   }
}

