#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		if (i % 3 == 0){
			cout << " " << i;
		}
		else if (i % 10 == 3){
			if (i % 3 == 0 ){
				cout << "";
			}
			else{
				cout << " " << i;
			}
		}
		else if (i % 100 == (i % 10) + 30 | i % 1000 == (i % 100) + 300 | i % 10000 == (i % 1000) + 3000 ){
			if (i % 3 == 0 )
			{
				cout << "";
			}
			else if (i % 10 == 3 )
			{
				cout << "";
			}
			else{
				cout << " " << i;
			}
		}
	}
	cout << endl; return 0;
}




