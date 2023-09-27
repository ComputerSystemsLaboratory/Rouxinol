#include<cstdio>
#include<algorithm>
using namespace std;

int bit[100001];
int n,q;

void add(int i,int v){
	while(i<=n){
		bit[i] += v;
		i += i & -i;
	}
}

int sum(int i){
	int res = 0;
	while(i>0){
		res += bit[i];
		i -= i & -i;
	}
	return res;
}


int main(){
	scanf("%d %d",&n,&q);
	fill(bit,bit+n+1,0);
	for(int i=0;i<q;i++){
		int cmd,x,y;
		scanf("%d %d %d",&cmd,&x,&y);
		if(cmd==0){
			add(x,y);
		}else{
			printf("%d\n",sum(y)-sum(x-1));
		}
	}
	return 0;
}