#include <iostream>
using namespace std;

int main(void){
	while(true){
		int n, m, count = 0, x = 10 ,y = 10, a, b;
		cin >> n;
		if(n == 0)return 0;
		int z[21][21] = {};
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			z[a][b] = 1;
		}
		count = n;
		cin >> m;
		char temp;
		int temp2;
		for(int i = 0; i < m; i++){
			cin >> temp;
			cin >> temp2;
			for(int j = 0;j < temp2; j++){
				if(temp == 'N') y++;
				if(temp == 'W') x--;
				if(temp == 'S') y--;
				if(temp == 'E') x++;
				if(z[x][y] == 1) {count--; z[x][y] = 0; }
			}
		}
		if(count == 0){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}

	return 0;
}
