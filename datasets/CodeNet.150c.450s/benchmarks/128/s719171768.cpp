#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[30], *end_p;
	int end;;
	cin >>str;
	
	end_p = strrchr(str, '\0');
	end = end_p - str;
	
	for(int i = (end - 1); i >= 0; i--){
		cout <<str[i];
	}
	
	cout <<endl;
	return 0;
}