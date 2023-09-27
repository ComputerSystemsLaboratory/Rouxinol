#include<cstdio>
int main(){
	long int debt = 100000;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		debt *= 1.05;
		int mod = debt % 1000;
		if(mod != 0){
			debt += (1000-mod);
		}
		//printf("%ld\n",debt);
	}
	printf("%d\n",debt);
	return 0;
}