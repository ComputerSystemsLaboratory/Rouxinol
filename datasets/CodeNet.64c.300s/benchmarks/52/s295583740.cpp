#include <iostream>
using namespace std;

int n, s;

int countAns(int sum, int pos, int last){
	int ans = 0;
	if (pos > n) {
		return 0;
	}else if(pos==n && sum==s){
		return 1;
	}else if(sum > s){
		return 0;
	}

	for (int i = last+1; i < 10; i++) {
		ans += countAns(sum+i, pos+1, i);
	}
	return ans;
}

int main(){
	while(cin >> n >> s){
		if(n==0 && s==0){
			break;
		}
		cout << countAns(0,0,-1) << endl;
	}
	return 0;
}