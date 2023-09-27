#include <iostream>

using namespace std;

int main(){

	int s1[5] , s2[5];
	int ans1 = 0 , ans2 = 0;

	for(int i = 0; i < 4; i++){
		cin >> s1[i];

		ans1 += s1[i];
	}

	for(int i = 0; i < 4; i++){
		cin >> s2[i];

		ans2 += s2[i];
	}

	if(ans1 < ans2) cout << ans2 << endl;
	else  cout << ans1 << endl;

	return 0;
}