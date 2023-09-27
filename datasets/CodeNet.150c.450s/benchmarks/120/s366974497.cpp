#include <string>
#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;

#define R 10

int r, c;

bitset<10005> bits[15];



int solve(){
	int permutate = 1 << r;
	bitset<10> flag;
	int rst = 0;

	for (int i = 0; i < permutate; i++){
		flag = bitset<10>(i);

		int count = 0;	

		for (int j = 0; j < r; j++){
			if (flag[j]) bits[j].flip();
		}

		for (int j = 0; j < c; j++){
			int a = 0;
			int b = 0;
			for (int k = 0; k < r; k++){
				if (bits[k][j]) a++;
				else b++;
			}
			count += max(a, b);
		}
		for (int j = 0; j < r; j++){
			if (flag[j]) bits[j].flip();
		}
		rst = max(rst, count);
	}
	return rst;
}

int main(){
	while(true){
		cin >> r >> c;
		cin.ignore();
		if (r == 0 && c == 0) break;
		for (int i = 0; i < r; i++){
			string line;
			getline(cin, line);
			line.erase(remove(line.begin(), line.end(), ' '), line.end());
			bits[i] = bitset<10005>(line);
		}
		int ans = solve();
		cout << ans << endl;
	}
	return 0;
}