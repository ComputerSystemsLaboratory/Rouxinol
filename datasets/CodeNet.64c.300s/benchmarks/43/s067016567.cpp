#include<cstdio>
#include<algorithm>
using namespace std;

int a,b,c,d,S,T;

int main(){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    S=a+b+c+d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    T=a+b+c+d;
    printf("%d\n",max(S,T));                                                                                                                                                                              
}       