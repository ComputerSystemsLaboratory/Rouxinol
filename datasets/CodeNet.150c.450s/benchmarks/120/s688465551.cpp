#include<stdio.h>
int r,c,s[10][10000],n;

int f(int d[10][10000],bool t[10]){
	int max=0,i,j,jk;
	for(i=0;i<r;i++){
		if(t[i]){
			for(j=0;j<c;j++){
				d[i][j]= !d[i][j];
			}
		}
	}
	/*for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d",d[i][j]);
			}
			puts("");
	}*/
	for(i=0;i<c;i++){
		jk=0;
		for(j=0;j<r;j++){
			jk+=d[j][i];
		}
		if(jk>r-jk) max+=jk;
		else max+=r-jk;
	}
	//printf("%d\n",max);
	for(i=0;i<r;i++){
		if(t[i]){
			for(j=0;j<c;j++){
				d[i][j]= !d[i][j];
			}
		}
	}
	return max;
}
void search(bool turn[10],int k){
	if(r==k){
		int o;
		/*for(int i=0;i<r;i++){
			printf("%d",turn[i]);
		}
		puts("");*/
		o=f(s,turn);
		if(o>n)n=o;
	}
	else{
		turn[k]=true;
		search(turn,k+1);
		turn[k]=false;
		search(turn,k+1);
	}
}

int main(){
	int i,j;
	bool b[10];
	for(;;){
		scanf("%d%d",&r,&c);
		if(!r && !c)break;
		n=0;
		for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&s[i][j]);
		search(b,0);
		printf("%d\n",n);
	}
	return 0;
}