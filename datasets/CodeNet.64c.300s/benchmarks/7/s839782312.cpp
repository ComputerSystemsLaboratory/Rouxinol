#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[4][13] = {};
	int x,y;
	char c[] = "SHCD";
	char b;
	for(int i=0;i<n;i++){
		cin >> b >> y;
		for(int j=0;j<4;j++) if(b==c[j]) x = j;
		a[x][y-1] = 1;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++) if(a[i][j]==0) cout << c[i] << " " << j+1 << endl;
	}
}