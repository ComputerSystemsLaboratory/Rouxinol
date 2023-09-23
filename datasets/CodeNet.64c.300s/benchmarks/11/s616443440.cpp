#include <cstdio>
int main(){
    int in;
    int h,m,s;
    scanf("%d",&in);

    h = in / 3600;
    in %= 3600;

    m = in / 60;
    in %= 60;

    s = in;

    printf("%d:%d:%d\n",h,m,s);
}
