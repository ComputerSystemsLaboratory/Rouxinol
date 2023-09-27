#include <iostream>

using namespace std;

int T[100][100];

void init(){
	for (int i = 0; i < 100; ++i)
	{
		for (int j = 0; j < 100; ++j)
		{
			T[i][j] = 0;
		}
	}
}

void DispTable(int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << T[i][j];
			if(j!=n-1) cout << " ";
		}
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	init();
	for (int i = 0; i < n; ++i)
	{
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; ++j)
		{
			int v;
			cin >> v;
			T[u-1][v-1] = 1;	
		}
	}
	DispTable(n);
	return 0;
}