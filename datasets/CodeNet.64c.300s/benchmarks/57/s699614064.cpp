// Solution for 0525: Osenbei
#include <iostream>
#include <algorithm>
using namespace std;
int r, c, ans, sum;
int cracker[11][10001], save[11][10001];
void solve(int i){
	sum = 0;
	for (int j = 1; j <= c; j++){
		save[i][j] = cracker[i][j];
		if (cracker[i][j])
			cracker[i][j] = 0;
		else
			cracker[i][j] = 1;
		int count = 0;
		for (int k = 1; k <= r; k++){
			if (cracker[k][j])
				count++;
		}
		if (count > r / 2)
			sum += count;
		else
			sum += r - count;
	}
	ans = max(ans, sum);
	if (i == r)
		return;
	for (int j = i + 1; j <= r; j++){
		solve(j);
		for (int k = 1; k <= c; k++){
			cracker[j][k] = save[j][k];
		}
	}
}
int main(){
	while (true){
		cin >> r >> c;
		if (!r && !c)
			return 0;
		ans = 0;
		for (int i = 1; i <= r; i++){
			for (int j = 1; j <= c; j++){
				cin >> cracker[i][j];
			}
		}
		for (int i = 1; i <= r; i++){
			solve(i);
		}
		cout << ans << endl;
	}
}