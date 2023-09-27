#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	
	string str[2000];
	
	int n;
	
	n = 10;
	
	for(int i = 0; i < 1000; i++){
		cin >> str[i];
		if(cin.eof()){
			n = i + 1;
			break;
		}
	}
	
	int max_size, max_num, sum, ans_size, ans_num;
	
	max_size = 0;
	max_num = 0;
	
	for(int i = 0; i < n; i++){
		if(str[i].size() > max_size){
			ans_size = i;
			max_size = str[i].size();
		}
		
		sum = 0;
		
		for(int j = 0; j < n; j++){
			if(str[i] == str[j]){
				sum++;
			}
		}
		
		if(sum > max_num){
			max_num = sum;
			ans_num = i;
		}
	}
	
	cout << str[ans_num] << " " << str[ans_size] << endl;
	
	return 0;
}