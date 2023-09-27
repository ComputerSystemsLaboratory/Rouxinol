#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;
		
int main(void){
	string str;
	int num;
	cin>>str;
	cin>>num;
	for(int i=0;i<num;i++){
		string op,temp,usiro;
		cin>>op;
		if(op=="replace"){
			int a,b;
			cin>>a>>b>>temp;
			str.replace(a,b-a+1,temp);
		}
		else if(op=="reverse"){
			int a,b;
			cin>>a>>b;
			reverse(&str[a],&str[b+1]);
		}
		else if(op=="print"){
			int a,b;
			cin>>a>>b;
			cout<<str.substr(a,b-a+1)<<endl;
		}
	}

	return 0;
}