#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main(){
	string str;
	int m; 

	while(cin>>str){
		if(str=="-")break;
		cin>>m;
		for(int i=0; i<m; i++){
			int h;
			cin>>h;
			string cat=str.substr(0,h);
			str.erase(0,h);
			str=str+cat;
		}
		cout<<str<<endl;
	}

	return 0;

}
