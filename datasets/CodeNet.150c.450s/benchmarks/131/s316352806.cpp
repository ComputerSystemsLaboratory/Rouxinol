#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

int a[1000000];

int main(){
	
	int num, L;
	
	while(true){
		cin >> num >> L;
		
		if(L == 0){
			break;
		}
		
		for(int i = 0; i < 1000000; i++){
			a[i] = 0;
		}
		
		a[num] = 1;
		
		int ans1, ans2, ans3;
		
		for(int i = 2; i < 100000000; i++){
			int b[6] = {};
			for(int j = 0; j < L; j++){
				b[j] = num % 10;
				num /= 10;
			}
			sort(b, b + L);
			int nex = 0;
			for(int j = 0; j < L; j++){
				nex *= 10;
				nex += (b[L - 1 - j] - b[j]);
			}
			//cout << nex << " ";
			if(a[nex] != 0){
				ans1 = a[nex] - 1;
				ans2 = nex;
				ans3 = i - ans1 - 1;
				break;
			}
			num = nex;
			a[num] = i;
		}
		cout << ans1 << " " << ans2 << " " << ans3 << endl;
	}
	
	return 0;
}