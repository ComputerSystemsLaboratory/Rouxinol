#include<stdio.h>
int main(){
	int i, k;
	int h[10], l[3]={0, 0, 0};
	for(i=0; i<10; i++)
		scanf("%d",&h[i]);
	for(i=0; i<10; i++){
		if(h[i] > l[0]){
			l[2] = l[1];
			l[1] = l[0];
			l[0] = h[i];
		}
		else if(h[i] > l[1]){
			l[2] = l[1];
			l[1] = h[i];
		}
		else if(h[i] > l[2])
			l[2] = h[i];
	}
	for(i=0; i<3; i++)
		printf("%d\n",l[i]);
	return 0;
}