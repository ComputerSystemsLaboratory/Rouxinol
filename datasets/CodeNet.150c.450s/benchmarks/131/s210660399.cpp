#include<cstdio>
#include<algorithm>

using namespace std;


#define rep(i,n) for(i=0;i<n;i++)



int main(){
	
	int a[25];
	int n[6];
	
	int L;
	int i,j;
	int t,mi,ma;
	bool f;
	
	
	while(true){
		scanf("%d %d",&a[0],&L);
		
		if(L==0)break;
		
		f=false;
		rep(i,24){
			t=a[i];
			
			rep(j,L){
				n[j]=t%10;t/=10;
			}
			sort(n,n+L);
			ma=mi=0;
			rep(j,L){
				mi=mi*10+n[j];
				ma=ma*10+n[L-j-1];
			}
			a[i+1]=ma-mi;
			
			//printf("   %6d %6d %6d  %6d   i:%d\n",a[i],ma,mi,a[i+1],i);
			
			rep(j,i+1){
				if(a[j]==a[i+1]){
					//printf("%d %d %d\n",i+1,a[i+1],i-j+1);
					printf("%d %d %d\n",j,a[i+1],i-j+1);
					
					f=true;break;
				}				
			}
			if(f)break;
		}
	}
	return 0;
}