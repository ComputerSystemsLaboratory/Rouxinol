#include<iostream>
using namespace std;

int a, b, n;
struct cross{
	bool works;
	int access;
};
cross map[17][17];//not use a=0 || b=0.

void read()
{
	cin >> n;
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= b; j++){
			map[i][j].works = false;
			map[i][j].access = 0;
		}
	}
	for (int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		map[x][y].works = true;
	}
	map[1][1].access = 1;
	return;
}

void dpa(int crossa, int crossb){
	if (crossa > a){ return; }
	if (map[crossa + 1][crossb].works){ return; }
	map[crossa + 1][crossb].access += map[crossa][crossb].access;
	return;
}

void dpb(int crossa, int crossb){
	if (crossb > b){ return; }
	if (map[crossa][crossb + 1].works){ return; }
	map[crossa][crossb + 1].access += map[crossa][crossb].access;
	return;
}

void solve(){
	for (int i = 2; i < a + b; i++){
		if (i <= ((a <= b) ? a : b)){
			for (int j = 1; j < i; j++){
				dpa(i - j, j);
				dpb(i - j, j);
			}
		}
		else if (a >= b && i <= a + 1){
			for (int j = 1; j <= b; j++){
				dpa(i - j, j);
				dpb(i - j, j);
			}
		}

		else if (i <= b + 1){
			for (int j = i - a; j <= i; j++){
				dpa(i - j, j);
				dpb(i - j, j);
			}
		}

		else {
			for (int j = i - a; j <= b; j++){
				dpa(i - j, j);
				dpb(i - j, j);
			}
		}
	}
}

int main()
{
	while (1){
		cin >> a >> b;
		if (!a && !b){ break; }
		read();
		solve();
		cout << map[a][b].access << endl;
	}
	return 0;
}