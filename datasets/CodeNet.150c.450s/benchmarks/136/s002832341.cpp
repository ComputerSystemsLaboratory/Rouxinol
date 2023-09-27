#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    if(a<b)
        swap(a,b);
    return gcd(b,a%b);
}

int main(){
    int a,b;
    while(scanf("%d %d",&a, &b)!=EOF){
        int g = gcd(a,b);
        printf("%d %d\n",g,a/g*b/g*g);
    }
    return 0;
}