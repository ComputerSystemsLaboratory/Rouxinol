#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	while(true){
		int x, y, s;
		cin >> x >> y >> s;
		if(x == 0 && y == 0 && s == 0){ break; }
		int answer = 0;
		for(int i = 1; i <= s; ++i){
			const int a = (i * (100 + x)) / 100;
			for(int j = 1; j <= s; ++j){
				const int b = (j * (100 + x)) / 100;
				if(a + b != s){ continue; }
				answer = max(
					answer, (i * (100 + y)) / 100 + (j * (100 + y)) / 100);
			}
		}
		cout << answer << endl;
	}
	return 0;
}