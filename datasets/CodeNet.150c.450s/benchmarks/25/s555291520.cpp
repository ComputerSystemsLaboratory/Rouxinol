#include <iostream>
//#include <ctype.h>
#include <stdio.h>
//#include <string>
using namespace std;
int main(){
	char ch;
	int num=0;
	int counter[30]={0};
	while(cin >> ch ){
		if( ch-'a' < 0 ){
			num=ch-'A';
		}
		else
			num=ch-'a';
		counter[num] ++;
		//cout << num << endl;
	}
	for( int i=0 ; i<26 ; i++ ){
		char a=i+'a';
		cout << a <<" : "<<counter[i]<< endl;
	}
	return 0;
}