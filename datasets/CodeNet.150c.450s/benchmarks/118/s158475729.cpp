#include <algorithm>	//sort, binary_search等々
#include <functional>	//greaterなど
#include <iomanip>		//各種マニピュレータ
#include <iostream>		//基本入出力
#include <string>		//文字列処理
#include <vector>		//STLの花形vector
using namespace std;

int today(int y, int m, int d){
	int day = 0, uruu;
	uruu = static_cast<int>((y - 1) / 3);
	day += ((y - 1) - uruu) * (20 * 5 + 19 * 5);
	day += uruu * 20 * 10;
	if((y % 3) == 0){
		day += (m - 1) * 20;
		day += d;
	}else{
		for(int i = 1; i < m; i++){
			if(i % 2 == 1){
				day += 20;
			}else{
				day += 19;
			}
		}
		day += d;
	}
	return day;
}

int main(){
	int n, y, m, d, day = today(1000, 1, 1);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> y >> m >> d;
		cout << (day - today(y, m, d)) << "\n";
	}
	cout << flush;

/*	nums_n = new int[n];
	for(int i = 0; i < n; i++){
		cin >> tmp;
		nums_n[i] = tmp;
		nums_v.push_back(tmp);
	}
	cout << nums_n[0] << nums_n[n - 1] << "\n";
	cout << *nums_v.begin() << *nums_v.end() << "\n";
	cout << flush;

	while(1){
		cin >> n;
		if(n == 0)
			break;
		
	}

	delete [] nums_n;*/

	return 0;
}