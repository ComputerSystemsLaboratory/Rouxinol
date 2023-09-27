#include <iostream>

int n, s;
int answer;
int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void dfs(int i, int sum, int k){
	if(k==n && sum==s){
		answer++;
	}
	if(i>9 || k==n || sum > s){
		return;
	}
	dfs(i+1, sum+arr[i], k+1);
	dfs(i+1, sum, k);
}

int main(void){
	while(std::cin >> n >> s){
		if(n==0 && s==0) break;
		answer = 0;
		dfs(0,0,0);
		std::cout << answer << std::endl;
	}
	return 0;
}

