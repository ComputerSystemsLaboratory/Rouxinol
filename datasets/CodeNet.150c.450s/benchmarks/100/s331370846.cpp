#include <cstdio>
using namespace std;
int main(){
    int n;unsigned long ans=1;
    scanf("%d", &n);
    while(n!=1){ans*=n;--n;}
    printf("%lu\n",ans);
    return 0;
}