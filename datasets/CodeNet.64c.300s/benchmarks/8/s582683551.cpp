
#include <iostream>
using namespace std;


int main(){
	
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){
		if(i % 3 == 0){
			cout << " " << i;
			continue;
		}else if(i % 10 == 3){
			cout << " " << i;
			continue;
		}
		
		int a = i;
		a /= 10;
		if(a % 10 == 3){
			cout << " " << i;
			continue;
		}
		a /= 10;
		if(a % 10 == 3){
			cout << " " << i;
			continue;
		}
		a /= 10;
		if(a % 10 == 3){
			cout << " " << i;
			continue;
		}
		
	}
	cout << endl;
	
	return 0;
}