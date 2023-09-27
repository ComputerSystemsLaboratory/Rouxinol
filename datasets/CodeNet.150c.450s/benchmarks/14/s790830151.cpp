#include<cstdio>

bool include3(int x){
	if(x % 10 == 3){
		return true;
	}else{
		x /= 10;
		if(x){
			return include3(x);
		}
		return false;
	}
}

bool judge(int x){
	if(!(x % 3)){
		return true;
	}else{
		return include3(x);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(judge(i)){
			printf(" %d", i);
		}
	}
	printf("\n");
}