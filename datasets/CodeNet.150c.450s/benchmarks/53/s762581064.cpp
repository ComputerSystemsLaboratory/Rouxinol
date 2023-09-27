#include <cstdio>
//#define int unsigned long long
#include <math.h>
#include <vector>

long MAX;
std::vector<bool> sosuu;

//?????°?????°?????¢??°
void erase(long foo)
{
   
 //   static int a=1;
  //  a++;
    //printf("%llu ", foo);
 //   if (a == 10) { a = 0; printf("\n"); }
    
    //?´???°???????????????????????????
    for (long i = foo*foo; i < MAX; i+=foo*2)
    {
        sosuu[i] = false;
    }
}

signed main()
{
    long  n;
    scanf("%ld",&n);
    printf("%ld:",n);
    
    MAX = sqrt(static_cast<signed>(n));
    //MAX = n;
    //  printf("%llu",MAX);
    
    
    sosuu.reserve(MAX);
    //?????????true??§?????????
    for (long i = 3; i < MAX; i+=2)
    {
//        if (i % 2)sosuu[i] = true;
//        else	  sosuu[i] = false;
        sosuu[i] = true;
    }
    sosuu[2]=true;
    
    while(n%2==0)
    {
        printf(" %ld",2);
        n=n/2;
    }
    //MAX?????§?????????????????????
    for (long p = 3; p < MAX; p+=2)
    {
        if (sosuu[p])
        {
            while(n%p==0)
            {
                printf(" %ld",p);
                n=n/p;
            }
            erase(p);
        }
    }
    if(n!=1){printf(" %llu",n);}
    printf("\n");
}

/*
#include <cstdio>
#include <math.h>
#include <set>
//#include <vector>
#define ulln unsigned int
ulln MAX;
//std::vector<bool> sosuu[1000000000];
std::set<unsigned int> sosuu;
int n;



//?????°?????°?????¢??°
void eraser(ulln foo)
{
//    static int a=1;
//    a++;
//    printf("%llu ", foo);
//    if (a == 10) { a = 0; printf("\n"); }
    for (ulln i = foo*foo; i <= MAX; i+=foo*2)
    {
        sosuu.insert(i);
    }
}

signed main()
{
    ulln n;
    scanf("%u",&n);
    printf("%u:",n);
    
    MAX=sqrt(n)+1;
    
    //?????????true??§?????????
/ *
    for (int i = 0; i <= MAX; i++)
    {
        if (i % 2)sosuu[i] = true;
        else	  sosuu[i] = false;
    }
* /
    sosuu.insert(2);
    
    while(n%2==0)
    {
        printf(" 2");
        n=n/2;
    }
    
    //MAX?????§?????????????????????
    for (ulln p = 3; p <= MAX; p+=2)
    {
//      auto f = sosuu.insert(p);
        if (sosuu.find(p)==sosuu.end())
        {
            while(n%p==0)
            {
                printf(" %u",p);
                n=n/p;
            }
            if(n==0){break;}
            eraser(p);
        }
        sosuu.erase(p);
    }
    printf("\n");
}

*/