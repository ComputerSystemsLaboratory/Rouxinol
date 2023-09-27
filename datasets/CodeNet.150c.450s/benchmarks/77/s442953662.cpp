#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin >> n){
		if(!n)
			break;
		bool field[21][21];
		for(int i=0;i<21;i++){
			for(int j=0;j<21;j++){
				field[i][j] = false;
			}
		}
		int x,y;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			field[y][x] = true;
		}
		int m;
		cin >> m;
		int count = 0;
		x = 10; y = 10;
		if(field[y][x] == true)
			count++;
		for(int i=0;i<m;i++){
			char h;
			int l;
			cin >> h >> l;
			switch(h){
				case 'N':
					for(int j=0;j<l;j++){
						y++;
						if(field[y][x]==true){
							count++;
							field[y][x] = false;
						}
					}
					break;
				case 'E':
					for(int j=0;j<l;j++){
						x++;
						if(field[y][x]==true){
							count++;
							field[y][x] = false;
						}
					}
					break;
				case 'S':
					for(int j=0;j<l;j++){
						y--;
						if(field[y][x]==true){
							count++;
							field[y][x] = false;
						}
					}
					break;
				case 'W':
					for(int j=0;j<l;j++){
						x--;
						if(field[y][x]==true){
							count++;
							field[y][x] = false;
						}
					}
					break;
			}
		}
		if(n == count)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}