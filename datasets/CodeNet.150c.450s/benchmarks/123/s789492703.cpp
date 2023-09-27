#include<iostream>
#include<cmath>
int main(){
	int ans = 0, n, b, j = 2, maxx;
	bool isprime;
	std::cin >> n;
	for (int i = 0; i<n; i++){
		isprime = true;
		std::cin >> b;
		maxx = (int)sqrt(b);
		for (int l = 2; l<=maxx; ++l){
			if (b%l == 0){
				isprime = false;
				break;
			}
		}
		if (isprime)++ans;
		isprime = true;
	}
	std::cout << ans << "\n";
}