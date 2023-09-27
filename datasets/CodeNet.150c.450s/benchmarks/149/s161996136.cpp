#include<stdio.h>
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
int find(int a,int b,int a1[]){
	return a1[a]==a1[b]?1:0;
}
void union1(int a,int b, int a1[], int n)
{
	int temp = a1[a];//a1[a] may change
	for(int i = 0; i<n; i++){
		if(a1[i]==temp) a1[i] = a1[b];
	}
}


int main(){
	int n,q;
	scanf("%d %d",&n,&q);
	int a1[n+1];//start with 1;
	for(int i = 0; i<n; i++) a1[i] = i;
	for(int i = 0; i<q; i++){
		int a, b;
		int com = 0;
		scanf("%d %d %d",&com,&a,&b);
		if(com==0){
			union1(a,b,a1,n);
			/*for(int i = 0; i<n; i++){
				printf("%d ",a1[i]);
			}printf("\n");*/
		} else {
			printf("%d\n",find(a,b, a1));
		}
	}
	
	
	return 0;
}
