#include <iostream>

using namespace std;

int n , s;

int dfs(int i , int sum , int N){

	if(N == 0 && sum == 0) return 1;//yes
	if(N == 0 || i == 10) return 0;//no

	return dfs(i + 1 , sum , N) + dfs(i + 1 , sum - i , N - 1);
}

int main(){

	while(cin >> n >> s , n){

		cout << dfs(0 , s , n) << endl;
	}
	return 0;
}