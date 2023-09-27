#include <cstdio>
#define LOOP(index,times) for(int index=0;index<times;index++)
using namespace std;

int main(){

int w,n,a,b,temp;
int* num;

scanf("%d\n%d",&w,&n);

num=new int[w];

LOOP(i,w)
	num[i]=i+1;

LOOP(i,n){
	scanf("%d,%d",&a,&b);
	temp=num[a-1];
	num[a-1]=num[b-1];
	num[b-1]=temp;
}

LOOP(i,w)
	printf("%d\n",num[i]);

delete [] num;
return 0;		
}