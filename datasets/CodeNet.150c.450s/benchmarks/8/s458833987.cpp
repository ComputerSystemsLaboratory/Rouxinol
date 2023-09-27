#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string t, h;
	int n, taro, hanako;

	taro = 0;
	hanako = 0;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> t >> h;
		if(t > h){
			taro = taro+3;
		}else if(t < h){
			hanako=hanako+3;
		}else{
			taro=taro+1;
			hanako=hanako+1;
		}
	}
	cout << taro << " " << hanako << endl;
	return 0;
}
