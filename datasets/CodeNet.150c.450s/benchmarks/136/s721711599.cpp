#include<cstdio>

int gcd_euclidean(int u, int v){
    if(v==0)  return u;
    return gcd_euclidean(v, u%v);
}

int lcm(int u, int v){
    return u*(v/gcd_euclidean(u,v));
}

int main(int argc, char const *argv[])
{
    int a, b;
    while(~scanf("%d %d", &a, &b)){
        printf("%d %d\n", gcd_euclidean(a,b), lcm(a,b));
    }
    return 0;
}

