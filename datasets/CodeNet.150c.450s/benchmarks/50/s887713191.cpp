#include <iostream>
int main()
{
	int n;
	while(std::cin>>n,n){
		n = 1000-n;
		int ans = 0;
		while(n>=500){
			n-=500; ans++;
		}
		while(n>=100){
			n-=100; ans++;
		}
		while(n>=50){
			n-=50; ans++;
		}
		while(n>=10){
			n-=10; ans++;
		}
		while(n>=5){
			n-=5; ans++;
		}
		ans += n;
		printf("%d\n",ans);
	}
	return 0;
}