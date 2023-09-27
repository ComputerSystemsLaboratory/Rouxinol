#include <iostream>
using namespace std;

int data[10][10000];
int R,C;

int next(int count,bool gyou[11]) {
	if (count == R) {
		int d[10][10000];
		for (int i = 0;i < R;i++) {
			for (int j = 0;j < C;j++) {
				d[i][j] = data[i][j];
			}
		}
		for (int j = 0;j < C;j++) {
			int sum = 0;
			for (int i = 0;i < R;i++) {
				if(gyou[i]) {
					if(d[i][j] == 0) sum++;
				}
				else {
					sum += d[i][j];
				}
			}
			if(sum > R/2) {
				for (int i = 0;i < R;i++) {
					if(d[i][j] == 0) {
						d[i][j] = 1;
					}
					else {
						d[i][j] = 0;
					}
				}	
			}
		}
		for (int i = 0;i < R;i++) {
			if (!gyou[i]) continue;
			for (int j = 0;j < C;j++) {
				if(d[i][j] == 0) {
					d[i][j] = 1;
				}
				else {
					d[i][j] = 0;
				}
			}
		}
		int result = 0;
		for (int i = 0;i < R;i++) {
			for (int j = 0;j < C;j++) {
				if(d[i][j] == 0) result++;
			}
		}
		return result;
	}
	int a = next(count + 1,gyou);
	gyou[count] = !gyou[count];
	int b = next(count + 1,gyou);
	return max(a,b);
}
int main() {
	// your code goes here
	while(true){
		cin >> R >> C;
		if(R==0&&C==0) break;
		for (int i = 0;i < R;i++){
			for (int j = 0;j < C;j++){
				cin >> data[i][j];
			}
		}
		bool first[11];
		for (int i = 0;i <11;i++) {
			first[i] = false;
		}
		cout << next(0,first) << endl;
	}
	return 0;
}