#include <iostream>
#include <string>
using namespace std;

void myPrint(string str, int a, int b){
	for(int i = a; i <= b; i++ ){
		cout<<str[i];
	}
	cout<<endl;
}
string reverse(string str,int a,int b){
	string temp = str;
	for(int i = 0; i <= (b-a) ; i++){
		str[a+i] = temp[b-i];
	}
	return str;
}

string replace(string str,int a,int b, string repStr){
	for(int i = 0; i <= (b-a) ; i++){
		str[a+i] = repStr[i];
	}
	return str;
}


int main()
{
	string str;
	string commandStr;
	string repStr;
	int itterNum;
	int a,b;
	cin>>str;
	cin>>itterNum;
	for(int i = 0; i < itterNum; i++){
		cin>>commandStr;
		if(commandStr == "print"){
			cin>>a>>b;
			myPrint(str,a,b);
		}else if(commandStr == "replace"){
			cin>>a>>b>>repStr;
			str = replace(str,a,b,repStr);
		}else if(commandStr == "reverse"){
			cin>>a>>b;
			str = reverse(str,a,b);
		}
	}
	return 0;
}