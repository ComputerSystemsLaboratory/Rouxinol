#include <stdio.h>
#include <string.h>
#include<iostream>
#include<queue>
using namespace std;

char s[13][1];
int D[106][106];
int A[106],f[106],w,h,n,sx,sy,gx,gy,e,g[106];
int   kensa(int ,int);
int main(){
	queue<int> P;
	int i,j,a,b,c,d;
	for(i=1;i<=100;i++){
		for(j=1;j<=100;j++){
			D[i][j]=-1;		
		}					
	}						
	for(i=1;i<=100;i++){		
		A[i]=0;				
		f[i]=-1;
		g[i]=0;
	}							
	scanf("%d" ,&a);//     a=4
	for(i=1;i<=a;i++){
        scanf("%d",&b);		//
		scanf("%d",&b);			//b=2					//
		for(j=1;j<=b;j++){		//
		scanf("%d",&c);			//					//
		D[i][c]=1;
//
		}						//D[???][???]
	}				
	for(i=1;i<=a;i++){
		for(j=1;j<=a;j++){
	//		printf("%d %d %d\n",i,j,D[i][j]);
		}	
	}//
	P.push(1);
	//P???1
	f[1]=0;
	while(!P.empty()){			//
		d=P.front();
		//
		A[d]=1;
		//
		P.pop();				//
		for(i=1;i<=a;i++){
			//printf("%d %d %d\n",d,i,D[d][i]);//
			if(D[d][i]==-1){		//
			continue;			//
			}					//
			if(A[i]==1){		//
			continue;			//
			}					//
			P.push(i);			//
			
			g[i]=g[d]+1;
			f[i]=g[d]+1;
			A[i]=1;
			//printf("%d\n",P.back());
		}	
	}							//
	for(i=1;i<=a;i++){			//
	printf("%d %d\n",i, f[i]);	//
	}
	return 0;
}