#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	for (int i = 3; i <= a; i++){
		if (i % 3 == 0){
			cout << " " << i;
		}
		else{
			int x = i;
			while (x!=0){
				if (x % 10 == 3) {
					cout << " " << i; break;
				}
				x /= 10;
			}
		}
	}
	cout << endl;
	return 0;
}