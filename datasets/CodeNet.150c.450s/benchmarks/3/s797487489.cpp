#include <iostream>
#include <string>
using namespace std;
//---------------------------------------
void print(string str, int n1, int n2);
void reverse(string &str, int n1, int n2);
void replace(string &str, int n1, int n2, string replace_str);
//---------------------------------------

int main(void)
{
	string str;  //?????????str
	int commands;   //????????°
	
	//??????????????\???
	cin >> str;
	
	//????????°q?????\???
	cin >> commands;
	
	for(int i = 0; i < commands; i++){
		
		string command;
		int n1, n2;
		
		cin >> command;
		cin >> n1;
		cin >> n2;
		
		if(command == "print"){ //??????????????????
			print(str, n1, n2);
		}
		else if(command == "reverse"){  //??????????????????
			reverse(str, n1, n2);
		}
		else{  //????????¬????????????
			string replace_str;
			cin >> replace_str;
			replace(str, n1, n2, replace_str);
		}
	}
	
	
	return 0;
}

//------------------------------------------------------------
void print(string str, int n1, int n2)
{
	for(int i = n1; i <= n2; i++){
		cout << str[i];
	}
	cout << endl;
}

//------------------------------------------------------------
void reverse(string &str, int n1, int n2)
{
	string copy = str;
	int j = 0;
	
	for(int i = n1; i <= n2; i++){
		str[i] = copy[n2 - j];
		j++;
	}
}

//------------------------------------------------------------
void replace(string &str, int n1, int n2, string replace_str)
{
	int j = 0;
	for(int i = n1; i <= n2; i++){
		str[i] = replace_str[j];
		j++;
	}
}