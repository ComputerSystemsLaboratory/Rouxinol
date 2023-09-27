#include<cstdio>
#include<algorithm>


using namespace std;

#define rep(i,n) for(i=0;i<n;i++)


int main(){
	
	int N,A,B,C,X;
	int Y[111];
	int i,y;
	
	
	
	while(true){
		scanf("%d %d %d %d %d",&N,&A,&B,&C,&X);
		if((N|A|B|C|X)==0)return 0;
		
		rep(i,N)scanf("%d",&Y[i]);
		y=0;
		
		
		rep(i,10002){
			if(i==10001)break;
			if(X==Y[y]){
				y++;
				if(y==N)break;
			}
			
			X=(A*X+B)%C;

		}
		
		if(i==10001)puts("-1");
		else printf("%d\n",i);
	
	
	}
	
	
	
		

}