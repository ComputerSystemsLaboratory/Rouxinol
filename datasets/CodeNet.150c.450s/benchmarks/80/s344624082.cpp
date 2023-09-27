#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    int A,B,a,b,c,d,cnt = 0;

    scanf("%d%d%d%d",&a,&b,&c,&d);
    A = a + b + c + d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    B = a + b + c + d;
    if(A<B){
        printf("%d\n",B);
    }
    else printf("%d\n",A);

    return 0;
}