#include<iostream>

int ball[10];
bool res;

void dfs(int i, int ls, int rs){
	if (i == 10){
		res = true;
		return;
	}

	if (ball[i] > ls)dfs(i + 1, ball[i], rs);
	if (ball[i] > rs)dfs(i + 1, ls, ball[i]);
}

int main(){
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++){
		for (auto &i : ball)std::cin >> i;
		res = false;
		dfs(0, 0, 0);
		std::cout << (res ? "YES" : "NO") << std::endl;
	}
	return 0;
}