#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <ctype.h>
#define N 100000
using namespace std;

void down(string *);

int main(){
	string w,s;
	cin>>w;
	int c=0;
	down(&w);
	while(cin>>s,s!="END_OF_TEXT"){
		down(&s);
		if(w==s) c++;
	}
	cout<<c<<endl;
	return 0;
}

void down(string *w){
	for(int i=0;i<(*w).size();i++){
		if('A'<=(*w)[i] &&(*w)[i]<='Z') (*w)[i]+='a'-'A';
	}
}