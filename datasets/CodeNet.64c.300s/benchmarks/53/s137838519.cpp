#include<iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int ans = 0;
	cin >> a >> b >> c;
	for (int i = a; i < b+1; i++){
		if (c % i == 0){
			ans++;
		}
	}
	cout << ans<<endl;
}