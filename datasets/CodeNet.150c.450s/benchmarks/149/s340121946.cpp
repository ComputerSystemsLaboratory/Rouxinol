#include <cstdio>

int s[10001] = {0};
int n,q;

int top(int x){
	if(s[x] == x){
		return x;
	}
	return top(s[x]);
}
int len(int x,int l=0){
	if(s[x] == x){
		return l;
	}
	return len(s[x],l+1);
}

int uni(int x,int y){
	int lx = len(x);
	int ly = len(y);
	int tx = top(x);
	int ty = top(y);
	if(lx < ly){
		s[ty] = tx;
	}
	else{
		s[tx] = ty;
	}
	return 0;
}

bool same(int x,int y){
	return top(x) == top(y);
}

int main(){
	scanf("%d%d",&n,&q);
	for(int i = 1; i < n; i++){
		s[i] = i;
	}
	int com,x,y;
	for(int I = 0; I < q; I++){
		scanf("%d%d%d",&com,&x,&y);
		if(com == 0){
			uni(x,y);
		}
		else{
			printf("%d\n",same(x,y) ? 1 : 0);
		}
	}
	return 0;
}

