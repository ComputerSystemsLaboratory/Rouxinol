#include <iostream>
using namespace std;
//AOJ0033

int Data[10];

bool dfs(int a,int left,int right) {
	//cout << a << "/" << left << "/" << right << endl;
	if (a == 10) return true; 
	if (Data[a] > left) {
		//Add a to the left
		if(dfs(a+1,Data[a],right)) return true;
	}
	else if (Data[a] > right) {
		//Add a to the right
		if(dfs(a+1,left,Data[a])) return true;
	}
	return false;
}

int main() {
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < 10;j++) {
			cin >> Data[j];
		}
		if(dfs(0,0,0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}