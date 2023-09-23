#include<stdio.h>
void funk(int,int);
int a,b;
char kuda[101][101],ku;
int main(void)
{
	int i,m,ka;
	
	while(1){
		ka=0;
		scanf("%d %d",&a,&b);
		if(a==0 && b==0){break;}
		else{
			for(i=0;i<a;i++){
					scanf("%s",kuda[i]);
			}
			for(i=0;i<a;i++){
				for(m=0;m<b;m++){
					if(kuda[i][m]=='@' || kuda[i][m]=='#' || kuda[i][m]=='*'){
							ku=kuda[i][m];
							ka++;
							kuda[i][m]='^';
//							printf("aaa\n");
							funk(i,m);
					}
				}
			}
			printf("%d\n",ka);
		}
	}
}	
void funk(int i,int m)
{
	//printf("i=%d m=%d\n",i,m);
	int kx[4]={0,1,0,-1},ky[4]={1,0,-1,0};
	int kkx,kky,j;
	//printf("aaaaaa\n");
	for(j=0;j<4;j++){
		kky=i+ky[j];
		kkx=m+kx[j];
		if(kkx>=0 && kkx<b && kky>=0 && kky<a && kuda[kky][kkx]==ku){
			kuda[kky][kkx]='^';
			funk(kky,kkx);
		}
	}
}