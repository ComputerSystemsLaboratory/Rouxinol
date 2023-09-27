#include <cstdio>
#define f(n)for(int i=0;i<n;i++)
#define s(w)scanf("%d",&w)
int a,n,m,d[99][99];
int u[16]={-1,-1,-1,0,0,1,1,1,-1,0,1,-1,1,-1,0,1};
void k(int x,int y){
	if(d[x][y]){d[x][y]=0;f(8)k(x+u[i],y+u[i+8]);}
}
int main(){
	a=0;
	s(n);s(m);
	if(n==0)return 0;
	f(9801)d[0][i]=0;
	f(n*m)s(d[i/n+1][i%n+1]);
	f(n*m)if(d[i/n+1][i%n+1])a++,k(i/n+1,i%n+1);
	printf("%d\n",a);
	main();
}