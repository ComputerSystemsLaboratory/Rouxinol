#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;
typedef tuple<int, int, int> tiii;

int main(){
	ios_base::sync_with_stdio(false);
	while(true){
		int h, w;
		cin >> h >> w;
		if(h == 0 && w == 0){ break; }
		const tiii input(h * h + w * w, h, w);
		tiii answer(150 * 150 * 2, 150, 150);
		for(int i = 1; i <= 150; ++i){
			for(int j = i + 1; j <= 150; ++j){
				const tiii t(i * i + j * j, i, j);
				if(t > input && t < answer){ answer = t; }
			}
		}
		cout << get<1>(answer) << " " << get<2>(answer) << endl;
	}
	return 0;
}