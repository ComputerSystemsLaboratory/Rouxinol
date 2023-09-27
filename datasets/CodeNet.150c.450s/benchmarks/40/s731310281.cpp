
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdlib>
using namespace std;
string str,ln;
int die[6]={0};
int i,n,v;
int DICE(){
	for(i=0;i<str.size();i++){
		if(str[i]=='E'){
			v=die[0];
			die[0]=die[3];
			die[3]=die[5];
			die[5]=die[2];
			die[2]=v;
		}else if(str[i]=='W'){
			v=die[0];
			die[0]=die[2];
			die[2]=die[5];
			die[5]=die[3];
			die[3]=v;
		}else if(str[i]=='N'){
			v=die[0];
			die[0]=die[1];
			die[1]=die[5];
			die[5]=die[4];
			die[4]=v;
		}else if(str[i]=='S'){
			v=die[0];
			die[0]=die[4];
			die[4]=die[5];
			die[5]=die[1];
			die[1]=v;
		}
	}
	return die[0];
}
int main(){
	for(i=0;i<6;i++){
		cin>>die[i];
	}
	getline(cin,ln);
	getline(cin,str);
	DICE();
	cout<<die[0]<<endl;
	return 0;
}