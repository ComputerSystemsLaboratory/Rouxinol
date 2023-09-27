#include<iostream>
#include<vector>
#include<string>
using namespace std;

int tate=0, yoko=0;
vector<vector<char>>kukaku;
char kudamono;
void kazyuen(int a, int b) {
	kukaku[a][b] = 0;
	if (a - 1 > -1 && kukaku[a - 1][b] == kudamono)kazyuen(a - 1, b);
	if (a + 1 <tate && kukaku[a + 1][b] == kudamono)kazyuen(a + 1, b);
	if (b - 1 > -1 && kukaku[a][b - 1] == kudamono)kazyuen(a, b - 1);
	if (b + 1<yoko && kukaku[a][b + 1] == kudamono)kazyuen(a, b + 1);
}
int main() {
	int a, b;
	while (cin >> a >> b, a | b) {
		kukaku.clear();
		tate = a;
		yoko = b;
		for (int c = 0; c < a; c++) {
			vector<char>h(b);
			kukaku.push_back(h);
			string e;
			cin >> e;
			for (int d = 0; d < b; d++) {
				kukaku[c][d] = e[d];
			}
		}
		int s = 0;
		for (int l = 0; l < a; l++) {
			for (int r = 0; r < b; r++) {
				if (kukaku[l][r]) {
					s++;
					kudamono = kukaku[l][r];
					kazyuen(l, r);
				}
			}
		}
		cout << s << endl;
	}
}