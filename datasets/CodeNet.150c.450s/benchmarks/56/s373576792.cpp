#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    int n,a[10000],min,max,sum;
    long long int sum_ll;
    min=1000000;
    max=(-1000000);
    
    sum_ll=0;
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
            if (min>a[i]){
                min=a[i];
            }
            if (max<a[i]){
                max=a[i];
            }
            sum_ll+=a[i];
    }
    printf("%d %d %lld\n",min,max,sum_ll);
    return 0;
}
