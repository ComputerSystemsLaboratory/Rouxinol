#include <bits/stdc++.h>
using namespace std;
#define reps(i,j,k) for(int i=j;i<k;i++)
#define rep(i,j) reps(i,0,j)

bool PRIME[10000010];

void e(){
	PRIME[0] = PRIME[1] = true;
	for(int i = 2; i * i <= 10000000; i++){
		if(!PRIME[i]){
			for(int j = i*i; j <= 10000000; j+=i){
				PRIME[j] = true;
			}
		}
	}
	return ;
}

int main(){
	e();
	int a,d,n;
	while(scanf("%d%d%d",&a,&d,&n),(a+d+n)){
		vector < int > O;
		int index = 0;
		while(true){
			if(!PRIME[a]){
				index++;
			}
			if(index == n){
				printf("%d\n",a);
				break;
			}
			a+=d;
		}
	}
	return 0;
}