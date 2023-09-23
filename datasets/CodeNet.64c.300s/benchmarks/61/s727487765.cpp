#include <bits/stdc++.h>
using namespace std;

int table[101][101];

int main(){

int r; cin >> r;
int c; cin >> c;

for(int i=0; i<r; i++){
	for(int j=0; j<c; j++){
		cin >> table[i][j];
		table[i][c] += table[i][j];
		table[r][j] += table[i][j];
		table[r][c] += table[i][j];
	}
}
for(int i=0; i<=r; i++){
	for(int j=0; j<=c; j++){
		cout << table[i][j] << ((j!=c)? " " : "");
	}
	cout << endl;
}
return 0;
}