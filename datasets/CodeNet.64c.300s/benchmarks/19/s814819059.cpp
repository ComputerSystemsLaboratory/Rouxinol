#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int nn[5001] = { 0 }, temp, n, max = -110000;
	while (cin >> n && (n != 0)){
		for (int i = 0; i < n; i++){
			cin >> nn[i];
		}
		temp = nn[0];
		for (int i = 1; i < n; i++){
			temp += nn[i];
			if (temp < nn[i]) temp = nn[i];
			if (max < temp) max = temp;
		}if (max < nn[0]) cout << nn[0] << endl;
		else cout << max << endl;
		max = -110000;
	}
	return 0;
}