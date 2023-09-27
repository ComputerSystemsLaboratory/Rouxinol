#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;
		
int main(void){
	string left,right,str;
	int num,h;
	while(1){
		cin>>str;
		if(str=="-")
			break;
		cin>>num;
		for(int i=0;i<num;i++){
			cin>>h;
			left = str.substr(0,h);
			right = str.substr(h,str.size());
			str = right + left;
		}
		cout<<str<<endl;
	}
	return 0;
}