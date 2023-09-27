#include<iostream>
#include<cmath>

#define rep(i,n) for(int i=0; i<n; i++)

int main(){
	int a,d;
	long int n, ans;
	while(std::cin >> a >> d >> n && (a || d || n)){
		long int i=0;
		while(n){
			int count=0;
			ans = a + (i*d);
			i++;
			rep(j,sqrt(ans)+1){
				if (ans == 2 || ans == 3 || ans == 5)
					continue;
				else if(ans % (j + 2) == 0)
				{
					count = 1;
					break;
				}
			}
			if(count == 0 && ans != 1){
				n--;
			}
		}
		std::cout << ans << std::endl;
	}
	return 0;
}