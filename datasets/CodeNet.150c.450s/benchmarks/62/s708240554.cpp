#include<cstdio>

int main(){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int t;
        if(b > a){
                t = a;
                a = b;
                b = t;
        }

        if(c > b){
                t = b;
                b = c;
                c = t;
                if(b > a){
                        t = a;
                        a = b;
                        b = t;
                }
        }

        printf("%d %d %d\n", c, b, a);
}