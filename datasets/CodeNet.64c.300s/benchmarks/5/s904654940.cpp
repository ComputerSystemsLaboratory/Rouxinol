#include<stdio.h>
int main(void)
{
	int a[10],s,d,f,i;
	for(i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++){
		for(f=i+1;f<=10;f++){
			if(a[i]<a[f]){
				s=a[i];
				a[i]=a[f];
				a[f]=s;
			}
		}
	}
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);
	printf("%d\n",a[3]);
	return 0;
}