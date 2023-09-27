#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    
    if(a>b) swap(a,b);
    while(b%a){
        c=a;
        a=b%a;
        b=c;
    }

    printf("%d\n",a);
    return 0;
}