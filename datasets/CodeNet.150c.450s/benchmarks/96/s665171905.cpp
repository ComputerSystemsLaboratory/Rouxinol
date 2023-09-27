#include <iostream>
#include <string>
using namespace std;


int main(){
	char list[][6]={
	{"     "},
	{".,!? "},
	{"abc  "},
	{"def  "},
	{"ghi  "},
	{"jkl  "},
	{"mno  "},
	{"pqrs "},
	{"tuv  "},
	{"wxyz "} };
	int m[10] = {1,5,3,3,3,3,3,4,3,4};
	int count,n,i,buf;
	string str;
	cin >> n;
	while(n--){
		cin >> str;
		count=0;
		for(i=0;i<str.size() && str[i]=='0';i++);
		for(;i<str.size();i++){
			if(str[i]!='0'){
				count++;
			}else{
				if(str[i-1]!='0'){
				buf = (int)str[i-1] - (int)'0';
				cout << list[buf][(count-1) % m[buf]];
				count=0;
				}else{
					count=0;
				}
			}
		}
		cout << endl;
        }
        return 0;
}