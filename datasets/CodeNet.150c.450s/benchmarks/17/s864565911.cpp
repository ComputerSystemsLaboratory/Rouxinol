#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int array[5];
	for(int i = 0; i < 5; ++i){
		cin >> array[i];
	}
	
	sort(array, array + 5);
	
	for(int i = 4; i >= 0; --i){
		cout << array[i];
		if(i != 0)
			cout << ' ';
	}
	cout << endl;
	
	return 0;
}