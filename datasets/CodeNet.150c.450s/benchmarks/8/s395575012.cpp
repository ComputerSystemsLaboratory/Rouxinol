#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,taro=0,hanako=0;
	bool flag;
	string str1,str2;
	cin >> n;
	while(n--){
		flag=true;
		cin >> str1 >> str2;
			if(str1 > str2)taro+=3;
			else if(str1 < str2) hanako+=3;
			else{
				taro++;
				hanako++;
			}
	}
	cout << taro << " " << hanako <<endl;
	return 0;
}