#include<iostream>
using namespace std;

int main(){
	int s[101][101] = {0};
	int	i, j, r, c;
	
	cin >> r >> c;
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			cin >> s[i][j];
			s[i][c] += s[i][j];
			s[r][j] += s[i][j];
		}
		s[r][c] += s[i][c];
	}
	
	for (i = 0; i < r + 1; i++){
		for(j = 0; j < c + 1; j++){
			cout << s[i][j];
			if(j != c){
				cout << " ";
			}
		}
		cout << endl;
	}

 	return 0;
}