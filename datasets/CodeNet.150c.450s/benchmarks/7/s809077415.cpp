#include <cstdio>

#define swap(a,b) a^=b^=a^=b
int main(){
    int a=0,b=0,c=0,getin;
    for(int i=0;i<10;i++){
        scanf("%d",&getin);
        if(getin>c) c=getin;
        if(getin>b) swap(b,c);
        if(getin>a) swap(a,b);
    }
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}