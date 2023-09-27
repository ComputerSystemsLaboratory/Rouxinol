#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, taro=0, hanako=0;
	string T, H;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> T >> H;
		if(T == H){
			taro++; hanako++;
		}
		else if(T < H) hanako += 3;
		else taro += 3;
	}
	cout << taro << " " << hanako << endl;
	return 0;
}