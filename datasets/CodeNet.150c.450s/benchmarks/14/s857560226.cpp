#include <iostream>
using namespace std;

int main(void){
	int i=1;
	int x;
	int n;

	cin >> n;
	if(n<=10000){
		while(i<=n){
			x=i;
			if(x%3==0){
				cout << " " << i;
				i++;
				continue;
			}
			while(x){
				if(x%10==3){
					cout << " " << i;
					break;
				}
				x/=10;
			}
			if(x%10==3){
				i++;
				continue;
			}
			i++;
		}
		cout << endl;
	}
	return 0;
}