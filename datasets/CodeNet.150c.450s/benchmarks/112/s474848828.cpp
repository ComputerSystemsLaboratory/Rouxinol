#include<iostream>
#include<vector>

using namespace std;

int main()
{
	for(;;){
		char todoset[2][51];
		int n, m;
		bool flg = 0;
		
		cin >> n;
		if(n == 0){
			break;
		}
		
		for(int i = 0; i < n; i++){
			cin >> todoset[0][i];
			cin >> todoset[1][i];
		}
		
		cin >> m;
		vector<char> str(m);
		for(int i = 0; i < m; i++){
			cin >> str[i];
		}
		
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(str[i] == todoset[0][j]){
					cout << todoset[1][j];
					flg = 1;
					break;
				}
			}
			if(flg != 1){
				cout << str[i];
			}
			flg = 0;
		}
		cout << endl;
	}
}