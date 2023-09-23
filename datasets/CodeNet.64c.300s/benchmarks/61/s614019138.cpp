#include <iostream>
using namespace std;

int main()
{
	int r,c;
	cin >> r >> c;
	int hyou[r + 1][c + 1];
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			cin >> hyou[i][j];
		}
	}
	
	for(int i = 0;i < r + 1;i++)
		hyou[i][c] = 0;
		
	for(int j = 0;j < c + 1;j++)
		hyou[r][j] = 0;	
	
	for(int i = 0;i < r;i++){
		for(int j = 0;j < c;j++){
			hyou[i][c] += hyou[i][j];
		}
	}
	
	for(int i = 0;i < c + 1;i++){
		for(int j = 0;j < r;j++){
			hyou[r][i] += hyou[j][i];
		}
	}
	
	for(int i = 0;i < r + 1;i ++){
		for(int j = 0;j < c + 1;j++){
			cout << hyou[i][j];
			if(j != c) cout << " ";
			else cout << endl;
		}
	}
	
	return 0;
}