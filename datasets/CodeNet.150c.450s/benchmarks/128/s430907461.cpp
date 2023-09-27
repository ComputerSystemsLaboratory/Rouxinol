#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string> 
#include <vector> 
using namespace std;

int main(){
	string str;
	int size,h;
	cin >> str;
	size = str.size();
	string mozi[size],ans = "";;
	for(int i = 0;size > i;i++){mozi[i] = str.substr(i,1);}
	for(int i = 1;size >= i;i++){ans.append(mozi[size - i]);}
	cout << ans << endl;


}