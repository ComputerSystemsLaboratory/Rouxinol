#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n,x;
	cin >> n;
	int count = 0;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x == 2 || x == 3){
			count++;
			continue;
		}
		if(x%2 == 0)
			continue;
		int sq = static_cast<int>(sqrt(x));
		bool flag = false;
		for(int a=3; a <= sq; a+=2){
			if(x%a == 0){
				flag = true;
				break;
			}
		}
		if(!flag){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}