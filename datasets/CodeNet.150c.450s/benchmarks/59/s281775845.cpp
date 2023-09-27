#include <stdio.h>

int main() {
	int p=0, p0=0, v=0, j=0;
	int a[1000]={};
	scanf("%d",&p);
	while (p0<p) {
		scanf("%d",&a[p0]);
		p0++;
	}
	for(int i=1;i<p;i++)  {
		for (p0=0;p0<p;p0++) {
			if ((p0+1)<p) printf("%d ",a[p0]);
			else printf("%d\n",a[p0]);
		}
		v=a[i];
		j=i-1;
		while (j>=0&&a[j]>v) {
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
		p0=0;
	}
	for (p0=0;p0<p;p0++) {
		if ((p0+1)<p) printf("%d ",a[p0]);
		else printf("%d\n",a[p0]);
	}
	return 0;
}