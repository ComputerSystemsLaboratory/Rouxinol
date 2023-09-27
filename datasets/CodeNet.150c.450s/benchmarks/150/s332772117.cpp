#include<cstdio>
#include<algorithm>
using namespace std;
int x[2000003],p[10003],n;
int main(){
	scanf("%d",&n);getchar_unlocked();
	for(int i = 0; i < n; i++){
		while(true){
			char c = getchar_unlocked();
			if('0' <= c && c <= '9'){
				x[i] = x[i] * 10 + (c - '0');
			}
			else{break;}
		}
		p[x[i]]++;
	}
	int c=0;
	for(int i=0;i<10001;i++){
		for(int j=0;j<p[i];j++){
			if(c)printf(" ");c++;
			printf("%d",i);
		}
	}
	printf("\n");
	return 0;
}