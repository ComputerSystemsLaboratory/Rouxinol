#include<iostream>
#include<cstdio>

using namespace std;

int e;

int check(int ne){
	if(ne==0)return 0;
	int lb=0,ub=10001;
	while(ub-lb>1){
		int mid=(lb+ub)/2;
		if(mid*mid<=ne)lb=mid;
		else ub=mid;
	}
	return (ne-lb*lb+lb);
}

int main(void){
	while(1){
		scanf("%d",&e);
		if(e==0)break;
		int lb=0,ub=101;
		while(ub-lb>1){
			int mid=(lb+ub)/2;
			if(mid*mid*mid<=e)lb=mid;
			else ub=mid;
		}
		//printf("%d\n",lb);
		int res=1000000;
		for(int i=0;i<=lb;i++){
			res=min(res,i+check(e-i*i*i));
		}
		printf("%d\n",res);
	}
	return 0;
}