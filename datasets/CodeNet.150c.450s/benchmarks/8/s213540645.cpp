#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string taro, hanako;
	int x1 = 0, x2 = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> taro >> hanako;
		if(taro == hanako){
			x1++;
			x2++;
		}
		else if(taro < hanako) x2 += 3;
		else  x1 += 3;
	}
	
	cout << x1 << " " << x2 << endl;
	
	return 0;
}