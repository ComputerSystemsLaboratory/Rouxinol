#include <iostream>
using namespace std;

int main(){
	int n,array[100][100],a,b,c;
	for(int i = 0;i < 100;++i){
		for(int j = 0;j < 100;++j){
			array[i][j] = 0;
		}
	}
	cin >> n;
	for(int i = 0;i < n;++i){
		cin >> a >> b;
		for(int j = 0;j < b;++j){
			cin >> c;
			array[a - 1][c - 1] = 1;
		}
	}
	for(int i = 0;i < n;++i){
		for(int j = 0;j < n;++j){
			if(j != 0) cout << " ";
			cout << array[i][j];
		}
		cout << endl;
	}
	return 0;
}