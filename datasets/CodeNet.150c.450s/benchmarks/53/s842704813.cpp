#include<iostream>
using namespace std;

bool flag[1000010];

int main(){
	int n, p;
	cin >> n;
	p = n;
	cout << n << ":";
	while (1){
		if (n == 1){
			cout << endl;
			break;
		}
		for (int i = 2;i< 1000010; i++){
			if (n%i == 0){
				cout << " " << i;
				n /= i;
				break;
			}
		}
		if (n == p){
			cout << " " << p << endl;
			break;
		}
	}
}