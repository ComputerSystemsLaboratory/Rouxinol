#include<cstdio>
#include<algorithm>
using namespace std;
int a,s,d,f,g,h[41][41];
int z,x,c;
void fanc(int,int);
int main(void)
{
	int i,j;
	while(1){
		c=0;
		scanf("%d %d",&a,&s);
		if(a==0&&s==0) break;
		for(i=0;i<a;i++) for(j=0;j<s;j++) h[i][j]=0;
		scanf("%d",&d);
		for(i=0;i<d;i++){
			scanf("%d %d",&f,&g);
			h[f-1][g-1]=-1;
		}
		z=0;
		x=0;
		fanc(z,x);
		printf("%d\n",c);
	}
	return 0;
}
void fanc(int z,int x){
	int i,j;
	if(z+1<a&&h[z+1][x]==0) fanc(z+1,x);
	if(x+1<s&&h[z][x+1]==0) fanc(z,x+1);
	if(z==a-1&&x==s-1) c++;
}