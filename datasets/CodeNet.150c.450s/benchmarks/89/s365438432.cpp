#include<iostream>
#include<cmath>
#include<cstring>

#define rep(i,n) for(int i=0; i<n; i++)
#define MAX 1000000

int main(){

	char p[MAX];
	int cnt;
	memset(p,1,sizeof(p));
	p[0] = 0;
	p[1] = 0;

	for(int i=2; i<sqrt(MAX)+1;i++){
		if(p[i])
			for(int j=2*i; j<MAX; j+=i){
				p[j] = 0;
			}
	}
	int a,d,n;
	while(std::cin >> a >> d >> n, (a||d||n)){
		cnt=0;
		long int i=a;
		while(1){
			if(p[i] == 1)cnt++;
			if(cnt == n){
				std::cout << i << std::endl;
				break;
			}
			i += d;
		}
	}
	return 0;
}