#include <cstdio>

int main (int argc, char const* argv[])
{
	
	int coin[6]={500,100,50,10,5,1};
	
	int a,r=0,m;
	
	while(true){
	
	scanf("%d",&m);
	if(m==0) break;
	m=1000-m;
	r=0;
	for(int i=0;i<6;i++){
		a=m/coin[i];
		r+=a;
		m-=(a*coin[i]);
	}
	
	
	printf("%d\n",r);
	
	}
	return 0;
}