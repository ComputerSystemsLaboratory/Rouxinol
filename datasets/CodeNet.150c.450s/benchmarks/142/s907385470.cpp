#include<stdio.h>
 
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=k;i<n;i++){
        (a[i-k]<a[i])?printf("Yes\n"):printf("No\n");
        }
    return 0;
}