#include <iostream>
using namespace std;

int dx[] = { 0, 0, 1,-1};
int dy[] = { 1,-1, 0, 0};

int d(char n){
	switch(n){
	case 'N':return 0;
	case 'S':return 1;
	case 'E':return 2;
	case 'W':return 3;
	}
}

int main(){
	char input;
	int n,a,b,x,y,m,mov;
	
	while(cin >> n,n){
		int ret = 0;
		int pos[21][21]={0};
		for(int i=0;i<n;i++){
			cin >> a >> b;
			pos[a][b] = 1;
		}
		cin >> m;
		x = y = 10;
		ret += pos[x][y];
		pos[x][y] = 0;
		for(int i=0;i<m;i++){
			cin >> input >> mov;
			int t = d(input);
			
			for(int j=0;j<mov;j++){
				x += dx[t];
				y += dy[t];
				ret += pos[x][y];
				pos[x][y] = 0;
			}
		}
		cout << (n==ret?"Yes":"No") << endl;
	}
}