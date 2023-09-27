#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int y, m, d;
		cin >> y >> m >> d;
		int answer = 0;
		while(y != 1000 || m != 1 || d != 1){
			int mlim = (y % 3 != 0) ? 19 + m % 2 : 20;
			if(d++ == mlim){
				d = 1;
				if(m++ == 10){
					++y;
					m = 1;
				}
			}
			++answer;
		}
		cout << answer << endl;
	}
	return 0;
}