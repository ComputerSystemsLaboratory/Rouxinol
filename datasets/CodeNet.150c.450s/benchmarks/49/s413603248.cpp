#include<iostream>
#include<algorithm>
int main(){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	int n;
	int avg=0;
	int s[100];
	while (true){
		std::cin >> n;
		if (n == 0) break;
		int q = n - 2;
		for (int i = 0; i < n; i++){
			std::cin >> s[i];
		}
		std::sort(s, s + n);
		for (int i = 1; i <= n-2; i++){
			avg += s[i];
		}
		std::cout << avg /q << "\n";
		avg = 0;
		for(int i = 0; i < n; i++){
			s[i]=0;
		}
	}
}