#include <stdio.h>
#include <math.h>

void swap(int *,int *);
int search(int,int,int);
int correct[201][3];

int main(void)
{
	int a,b,c;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=200;i++){
		correct[i][0]=3*i;
		correct[i][1]=4*i;
		correct[i][2]=5*i;
	}
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(b<a)swap(&a,&b);
		if(c<b)swap(&b,&c);
		if(b<a)swap(&a,&b);
		if( search(a,b,c) ) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

void swap(int *a,int *b){
	int work;
	work=*a;
	*a=*b;
	*b=work;
}

int search(int a,int b,int c){
	int i;
	for(i=1;i<201;i++){
		if( (correct[i][0]==a) && (correct[i][1]==b) && (correct[i][2]==c) ) return 1;
	}
	return 0;
}