#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
	
	string string;
	int i=0;
	
	getline(cin, string);
	
	while(string[i]!='\0'){
		if(islower(string[i]))
			string[i]=toupper(string[i]);
		else if(isupper(string[i]))
			string[i]=tolower(string[i]);
		i++;
	}
	
	cout << string << endl;
	
	return 0;
}