/*#include<stdio.h>

int checkPrime(int i)
{
     int p;
    for ( p = 2 ; p <= i - 1 ; p++ )
    {
        if ( i%p == 0 )
            return 0;
    }
    if ( p == i )
        return 1;
}
int main()
{
    int n,sum=0,count=0,rem,i;
    while(scanf("%d",&n)!= EOF){
        for(i=2;i<n-1;++i)
        {
           if(checkPrime(i)==1);
              count++;

        }
        printf("%d",count);
    }
    return 0;
}

/*#include<stdio.h>

int main()
{
   int n, i = 3, count, c;

   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);

   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }

   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n",i);
         count++;
      }
      i++;
   }

   return 0;
}
*/
/*#include<stdio.h>
#include<math.h>
int main(){

    int n;
    while(scanf("%d",&n)!=EOF){
    int num,i,count=0;
    for(num = 2;num<=n;num++){
         int flag = 1;
         int len = (int) (sqrt(num));
         //printf("%d\n",len);
         for(i=2;i<=len;i++){
             if(num%i==0){
                flag = 0;
                 break;
             }
        }
        if(flag==1)
            count++;
    }
    printf("%d\n",count);
    }

   return 0;
}

*/
#include<stdio.h>
#include<string.h>

bool mark [1000000];
 void sieve ()
 {
    int N = 1000000;
    memset (mark, true, N + 2);

    mark [0] = mark [1] = false;

    for ( int i = 4; i < N + 2; i += 2 )
        mark [i] = false;

    for ( int i = 3; i * i <= N + 2; i += 2 ) {
        if ( mark [i] == true ) {
            for ( int j = i * i; j < N + 2; j += 2 * i )
                mark [j] = false;
        }
    }
 }
int main()
{
    int n;
    sieve();
    while(scanf("%d",&n)!=EOF){
        int count = 0,i;
        for(i=2;i<=n;++i)
        {
            if(mark[i]==true)
                count++;
        }
        printf("%d\n",count);
   }
}