#include <iostream>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for (int j=1;j<=n;j++){
	int x = j;
		if (x%3==0){
			cout << " " << j;
			continue;
		}
		while (x){
			if (x%10==3){
				cout << " " << j;
				break;
			}
			x /= 10;
		}
	}
	cout << endl;
}