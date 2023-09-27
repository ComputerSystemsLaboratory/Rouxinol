#include<stdio.h>

#define INF 1000001

#define maxi(a,b) ((a>b)?a:b)
#define mini(a,b) ((a<b)?a:b)

int main(void){
    int max=-INF,min=INF,a,i,n;
    long long int sum=0LL;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a);
        max = maxi(a,max);
        min = mini(a,min);
        sum+=a;
    }
    printf("%d %d %lld\n",min,max,sum);
    return 0;
}