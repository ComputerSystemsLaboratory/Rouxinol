#include<iostream>

using namespace std;

int main(){
	int n, stage, stage2, i;

	while (true) {
		int left = 0, right = 0;
		cin >> n;
		if(n == 0) break;
		for(i = 0; i < n; i ++){
			cin >> stage >> stage2;
			if(stage > stage2) left += stage + stage2;
			else if(stage < stage2) right += stage + stage2;
			else{
				left += stage;
				right += stage2;
			}
		}
		cout << left << " " << right << endl;
	}
	return 0;
}