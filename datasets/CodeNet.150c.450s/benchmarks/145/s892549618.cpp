#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef pair<int,string> P;

int main(void)
{

	char c;
	string str,maxstr;
	P d[1001] = {};	

	while(scanf("%c", &c), c != '\n'){
		if(c != ' '){
			str += c;
		}
		else {
			if(strlen(str.c_str()) > strlen(maxstr.c_str())){
				maxstr.clear();
				maxstr = str;
			}
			int i;
			for(i = 0; d[i].first != 0; i++){
				if(d[i].second == str){
					d[i].first++;
					break;
				}
			}
			if(d[i].first == 0){
				d[i] = P(1,str);
			}
			str.clear();
		}
	}
	if(strlen(str.c_str()) > strlen(maxstr.c_str())){
		maxstr.clear();
		maxstr = str;
	}
	int i;
	for(i = 0; d[i].first != 0; i++){
		if(d[i].second == str){
			d[i].first++;
			break;
		}
	}
	if(d[i].first == 0){
		d[i] = P(1,str);
	}
	str.clear();

	sort(d,d+1001);
	cout << d[1000].second << ' ' << maxstr << endl;

	return 0;
}