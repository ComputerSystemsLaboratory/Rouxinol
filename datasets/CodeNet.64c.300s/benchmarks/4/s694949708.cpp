#include <cstdio>

int main(){
    int a, b, c;
    scanf("%d %d %d\n",&a,&b,&c);
    if(c>100||a<0){
        printf("No\n");
    }else if(a < b && b< c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
