#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
	
	int b, i = 0;
	//char buf[1200];
	string a;
	getline(cin, a);
	/*
	while(i < 1200){
		b = buf[i];
		if(b == '\n')break;
		else if(b >= 96 && b <= 122){
			b -= 32;
		}
		
		else if(b >= 64 && b <= 90){
			b += 32;
		}
		cout << char(b);
		i++;
	}
	*/
	
	for(int i=0;i<a.size();i++)
	{
		b = a[i];
		if(b == '\n')break;
		else if(b >= 96 && b <= 122){
			b -= 32;
		}
		
		else if(b >= 64 && b <= 90){
			b += 32;
		}
		cout<<(char)b;
	}
	cout << endl;
	return 0;
}