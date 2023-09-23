#include<iostream>
#include<algorithm>
using namespace std;
void dfs(int, int, int);
int coun=0,go;
int main()
{
	int n;
	while (1){
		coun = 0;
		cin >> n >> go;
		if (n + go == 0)break;
		for (int i = 0; i < 9; i++){
			dfs(n, i, i);
		}
		cout << coun << endl;
	}
}
void dfs(int n, int sum, int to){
	if (n == 1 && sum == go){
		coun++;
	}
	for (int i = to + 1; i < 10; i++){
		dfs(n - 1, sum + i, i);
	}
}