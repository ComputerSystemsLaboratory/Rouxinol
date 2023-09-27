#include<iostream>
#include <cstdio>
#include<cctype>
#include <algorithm>
#include<string>

using namespace std;

int main(){
	int match, p_taro = 0, p_hana = 0;
	string taro, hana;
	
	cin >> match;
	
	for(int i = 0; i < match; i++){
		cin >> taro >> hana;
		if(taro > hana)
			p_taro += 3;
		else if(taro < hana)
			p_hana += 3;
		else{
			p_taro ++;
			p_hana ++;
		}
	}
	cout << p_taro <<" " << p_hana << endl;
	
	return 0;
}