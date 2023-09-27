#include <stdio.h>

int main(){
    int n,y[100],m[100],d[100],i,a,b,p,q,r;
    scanf("%d",&n);
    a=(20*5+19*5)*666+20*10*333+1;
    for (i=0;i<n;i++) {
        scanf("%d %d %d",&y[i],&m[i],&d[i]);
        p=y[i]/3;
        q=y[i]%3;
        r=m[i]/2;
        if (q!=0) {
            if (m[i]%2==0) {
                b=590*p+195*(q-1)+39*(r-1)+20+d[i];
            }
            else {
                b=590*p+195*(q-1)+39*r+d[i];
            }
        }
        else {
            b=590*(p-1)+390+20*(m[i]-1)+d[i];
        }
        printf("%d\n",a-b);
    }
    return 0;
}