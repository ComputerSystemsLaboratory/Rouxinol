#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int Y, M, D;
		cin >> Y >> M >> D;

		int offset = (10 - M + 1) * 20 - (D - 1);
		if (Y % 3 != 0){
			offset -= (12 - M) / 2; //小の月の分を引く。 int/intだが問題ない
		}

		Y++;
		int uruutime = (1002 - Y) / 3;
		int ans = offset + 195 * (1000 - Y) + uruutime * 5;
		cout << ans << endl;
	}
	return 0;
}