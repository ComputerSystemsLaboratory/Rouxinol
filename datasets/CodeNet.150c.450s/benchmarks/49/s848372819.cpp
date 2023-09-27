#include<cstdio>

bool solve(){
	int n,ma = 0,mi = 1000,sum = 0;
	scanf("%d",&n);
	if(n==0) return false;
	for(int i=0;i<n;i++){
		int s;
		scanf("%d",&s);
		if(s<mi) mi = s;
		if(s>ma) ma = s;
		sum += s;
	}
	printf("%d\n",(sum-ma-mi)/(n-2));
	return true;
}

int main(){
	while(solve()){}
}