#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	int point[51000]; //データセットごとの点数
	int count = 0;
	
	while (1)
	{
		
		cin >> n;
		
		if(n == 0) break; // 0を入力されたら終了
		
		int a[n];
		count++;
		
		for (int i = 0; i < n; i++) std::cin >> a[i];
		
		// 配列を大きい順に並べ替える
		sort(a, a+n, greater<int>());
		
		int proa = 0;
		int d;
		//データセットごとの作業
		for (int i = 0; i < n; i++) {
			
			// 隣のデータとの差
			d = abs(proa - a[i]);
			
			// 初期値は最大点
			if(i == 0) point[count - 1] = a[0];
			
			if(d < point[count - 1]) point[count - 1] = d;
			
			proa = a[i];
		}
	}
	
	for (int i = 0; i < count; i++) {
		cout << point[i] << endl;
	}
	
	return 0;
}
