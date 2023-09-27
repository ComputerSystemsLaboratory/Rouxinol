#include<stdio.h>

#include<queue>
#include<string.h>
#include<iostream>
using namespace std;
struct PP{
	int x;
	int y;
	int Z;
	int c;
};
char s[1002][1002],C[11]={"0123456789"};
int A[1002][1002],d;
int main(){
	PP S;
	queue<PP> P;
	int  w,h;
	int d=0,i=0,j=0,l=-1;
	int x[4]={ 1, 0,-1,0};
	int y[4]={ 0 ,1,0,-1};
	scanf("%d %d %d",&h,&w,&d);
	//memset(A,0,sizeof(A));
		for(i=0;i<h;i++){
		scanf("%s",s[i]);
	}
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){

		if(s[i][j]=='S'){
			S.x=j;
			S.y=i;
			S.Z=0;
			S.c=1;
			A[S.y][S.x]=1;
			P.push(S);
		}
		}
	}
	while(1){
		l++;
		
		if(l==4) {
			l=0;
			P.pop();
		}
		S=P.front();

		S.x+=x[l];
		S.y+=y[l];
		S.Z++;
		if(s[S.y][S.x]=='X'||S.y==h||S.x==w||S.x==-1||S.y==-1){
		continue;
		}
		if(A[S.y][S.x]==1){
			continue;
		}
				A[S.y][S.x]=1;
		if(C[S.c]==s[S.y][S.x]){
				S.c++;
				if(S.c==d+1){
				break;
				}
				while(!P.empty()){
				P.pop();
				
				}
			memset(A,0,sizeof(A));
			l=-1;
		

		} 
		P.push(S);
	}
	printf("%d\n",S.Z);
	return 0;
}