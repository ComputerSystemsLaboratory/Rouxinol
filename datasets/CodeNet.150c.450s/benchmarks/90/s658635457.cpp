#include <iostream>
#include <string>
using namespace std;

int main(){
	int n[101], k, max=0;
	string ans;

	for (int i = 0; i < 101; i++) {
		n[i] = 0;
	}

	while(true){
		cin >> k;
		if (cin.eof()) { break; }
		n[k]++;
	}
	for(int i = 0;i<101;i++){
		if(max == n[i]){
			ans += "\n";
			ans += to_string(i);
		}
		else if (max < n[i]){
			ans = to_string(i);
			max = n[i];
		}
	}
	cout << ans << endl;
	return 0;
}