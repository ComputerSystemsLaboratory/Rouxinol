#include<cstdio>

int gcd(int a, int b){
    if(a == b)
        return a;
    else if(a > b)
        a -= b;
    else if(a < b)
        b -= a;
    return gcd(a, b);
}

int lcm(int a, int b){

    return (a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b);
}

int main(){
    int a, b;
    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }
    return 0;
}