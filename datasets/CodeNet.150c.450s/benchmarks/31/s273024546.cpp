#include <iostream>
using namespace std;

int main(){
	int l_min;
	int p_max = 1-1000000000;
	int p_max_temp;
	int n;
	cin >> n;
	int temp;

	cin >> l_min;
	for(int i=2; i<=n; i++){
		cin >> temp;
		p_max_temp = temp - l_min;
		if(temp < l_min){
			l_min = temp;
		}
		if(p_max_temp > p_max){
			p_max = p_max_temp;
		}
	}

	cout << p_max << endl;

	return 0;
}