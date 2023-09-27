#include <iostream>
#include <cstdio>
#include <cctype>
#include <stdlib.h>
#include <string>

using namespace std;

int main(void){
	while(1){
		int sum=0,n;
		string str;
		cin>>str;
		if(atoi(str.c_str())==0)
			break;
		n = str.size();
		for(int i=0;i<n;i++){
			sum += str[i] - '0';
		}
		cout<<sum<<endl;
	}
  return 0;
}