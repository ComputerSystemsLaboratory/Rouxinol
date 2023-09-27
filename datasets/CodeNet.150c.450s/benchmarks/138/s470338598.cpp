#include <cstdio>
using namespace std;

int gcd(int x, int y){
    if(y>x){
        int t = x;
        x = y;
        y = t;
    }
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
}