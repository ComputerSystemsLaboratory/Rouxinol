#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int str_int(string str){
	int ans = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == 'm'){
			if(i != 0){
				if(str[i - 1] >= '2' && str[i - 1] <= '9'){
					ans += (str[i - 1] - '0') * 1000;
				}else{
					ans += 1000;
				}
			}else{
				ans += 1000;
			}
		}else if(str[i] == 'c'){
			if(i != 0){
				if(str[i - 1] >= '2' && str[i - 1] <= '9'){
					ans += (str[i - 1] - '0') * 100;
				}else{
					ans += 100;
				}
			}else{
				ans += 100;
			}
		}else if(str[i] == 'x'){
			if(i != 0){
				if(str[i - 1] >= '2' && str[i - 1] <= '9'){
					ans += (str[i - 1] - '0') * 10;
				}else{
					ans += 10;
				}
			}else{
				ans += 10;
			}
		}else if(str[i] == 'i'){
			if(i != 0){
				if(str[i - 1] >= '2' && str[i - 1] <= '9'){
					ans += (str[i - 1] - '0') * 1;
				}else{
					ans += 1;
				}
			}else{
				ans += 1;
			}
		}
	}
	return ans;
}

string int_str(int num){
	string str, dum;
	str = "";
	if(num >= 1000){
		if(num / 1000 > 1){
			dum = "D";
			dum[0] = num / 1000 + '0';
			str = str + dum;
		}
		dum = "m";
		str = str + dum;
	}
	num -= (num / 1000) * 1000;
	if(num >= 100){
		if(num / 100 > 1){
			dum = "D";
			dum[0] = num / 100 + '0';
			str = str + dum;
		}
		dum = "c";
		str = str + dum;
	}
	num -= (num / 100) * 100;
	if(num >= 10){
		if(num / 10 > 1){
			dum = "D";
			dum[0] = num / 10 + '0';
			str = str + dum;
		}
		dum = "x";
		str = str + dum;
	}
	num -= (num / 10) * 10;
	if(num >= 1){
		if(num / 1 > 1){
			dum = "D";
			dum[0] = num / 1 + '0';
			str = str + dum;
		}
		dum = "i";
		str = str + dum;
	}
	num -= (num / 1) * 1;
	return str;
}

int main(){
	
	int n;
	
	string str1, str2, str_a;
	
	int num1, num2, ans;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> str1 >> str2;
		num1 = str_int(str1);
		num2 = str_int(str2);
		ans = num1 + num2;
		str_a = int_str(ans);
		cout << str_a << endl;
	}
	
	return 0;
}