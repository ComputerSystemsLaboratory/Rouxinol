#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int md[11] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int m, d;
	string str[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
	
	while(true){
		cin >> m >> d;
		
		if(m == 0 && d == 0) return 0;
		
		for(int i = 1; i < m; i++){
			d += md[i - 1];
		}
		
		cout << str[d % 7] << endl;
	}
}