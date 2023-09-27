#include <iostream>
#define INF 1e+9
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int y,m,d;
		cin >> y >> m >> d;
		d += (y - 1) / 3 * 200 + (y - (y - 1) / 3 - 1) * 195;
		if(y % 3 == 0){
			d += (m - 1) * 20;
		}else{
			d += (m - 1) / 2 * 19 + (m - (m - 1) / 2 - 1) * 20;
		}
		cout << 196471 - d << endl;
	}
	return 0;
}