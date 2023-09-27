#include<stdio.h>
#include<algorithm>
using namespace std;
int x[1500];
int y[1500];
int val[2000000];
int val2[2000000];
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a+b){
		for(int i=0;i<a;i++)scanf("%d",x+i);
		int now=0;
		for(int i=0;i<a;i++)x[i]=now+=x[i];
		for(int i=0;i<b;i++)scanf("%d",y+i);
		now=0;
		for(int i=0;i<b;i++)y[i]=now+=y[i];
		now=0;
		for(int i=0;i<a;i++)
			for(int j=i;j<a;j++)
				val[now++]=x[j]-(i?x[i-1]:0);
		std::sort(val,val+now);
		int at=0;
		for(int i=0;i<b;i++)
			for(int j=i;j<b;j++)
				val2[at++]=y[j]-(i?y[i-1]:0);
		int ret=0;
		for(int i=0;i<at;i++){
			ret+=upper_bound(val,val+now,val2[i])-lower_bound(val,val+now,val2[i]);
	//		printf("%d %d\n",val2[i],upper_bound(val,val+now,val2[i])-lower_bound(val,val+now,val2[i]));
		}
		printf("%d\n",ret);
	}
}