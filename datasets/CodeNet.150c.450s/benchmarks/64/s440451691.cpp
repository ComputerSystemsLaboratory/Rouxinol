#include <iostream>

using namespace std;
int m[2001];
int n, q, a;


bool judge(int time, int sum){
	if(time < n){
		return (judge(time + 1, sum) || judge(time + 1, sum - m[time]));
	}
	else{
		if(sum == 0){
			return true;
		}
		else{
			return false;
		}
	}
}


int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m[i];
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> a;
		if(judge(0, a)){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}