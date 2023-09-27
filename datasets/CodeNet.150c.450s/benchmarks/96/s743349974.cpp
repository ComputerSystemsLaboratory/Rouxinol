#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;


int main(){
	
	int n;
	
	vector<char> v[10];
	
	int a[10] = {0, 0, 3, 3, 3, 3, 3, 4, 3, 4};
	
	v[1].push_back('.');
	v[1].push_back(',');
	v[1].push_back('!');
	v[1].push_back('?');
	v[1].push_back(' ');
	
	int index = 2;
	int count = 0;
	
	for(int i = 0; i < 26; i++){
		v[index].push_back('a' + i);
		count++;
		if(count >= a[index]){
			count = 0;
			index++;
		}
	}
	
	cin >> n;
	
	for(int loop = 0; loop < n; loop++){
		
		string str;
		
		cin >> str;
		
		int ref = 0;
		int count = 0;
		
		for(int i = 0; i < str.size(); i++){
			if(ref == 0 && str[i] != '0'){
				ref = str[i] - '0';
			}else if(str[i] != '0'){
				count++;
			}else if(ref != 0 && str[i] == '0'){
				printf("%c", v[ref][count % v[ref].size()]);
				ref = 0;
				count = 0;
			}
		}
		printf("\n");
		
	}
	return 0;
}