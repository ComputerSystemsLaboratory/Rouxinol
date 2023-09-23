#include <iostream>

using namespace std;
typedef long long ll;
// 入力
ll n,r,temp,mini;

int main(){
	temp = -10e9-1;
	mini = 10e9+1;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> r;
		temp = max(temp,r-mini);
		if(mini > r)mini = r;
	}
	cout << temp << endl;
}