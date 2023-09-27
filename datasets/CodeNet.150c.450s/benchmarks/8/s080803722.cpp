
#include<iostream>
#include<string>

using namespace std;

int main(){

	int taropoint = 0, hanakopoint = 0, n;
	string taro, hanako;

	cin >> n;

	for (int i = 0; i < n;i++){
		cin >> taro >> hanako;
		if (taro > hanako){
			taropoint += 3;
		}
		else if (taro < hanako){
			hanakopoint += 3;
		}
		else{
			taropoint++;
			hanakopoint++;
		}
	}

	cout << taropoint << ' ' << hanakopoint << endl;

	return 0;
}
