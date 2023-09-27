#include<stdio.h>
int main(void)
{
    int n,a[10000],b[10000],z=0,x=0,i;
	scanf("%d",&n);
	while(n!=0){
	    for(i=0;i<n;i++){
		    scanf("%d %d",&a[i],&b[i]);
		}
		for(i=0;i<n;i++){
		    if(a[i]>b[i]){
			    z=z+a[i]+b[i];
			}
			else if(a[i]<b[i]){
			    x=x+a[i]+b[i];
			}
			else{
			    z=z+a[i];
				x=x+b[i];
			}
		}
		printf("%d %d\n",z,x);
		z=0;
		x=0;
		scanf("%d",&n);
	}
	return 0;
}