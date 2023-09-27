#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	int n;
	cin >> n;

	string taro, hanako;
	int taro_p = 0;
	int hanako_p = 0;
	for(int i = 0; i < n; i++){
		cin >> taro >> hanako;
		if(taro > hanako){
			taro_p += 3;
		}else if(taro < hanako){
			hanako_p += 3;
		}else{
			taro_p++;
			hanako_p++;
		}
	}

	cout << taro_p << " " << hanako_p << endl;

	return 0;
}