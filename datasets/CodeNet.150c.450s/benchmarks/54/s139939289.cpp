#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;
		
int main(void){
	string str,search;
	int count=0;
	cin>>search;
	for(int i=0;i<search.size();i++){
		if(isupper(search[i]))
			search[i] = tolower(search[i]);
	}
	while(1){
		cin>>str;
		if(str=="END_OF_TEXT")
			break;
		for(int i=0;i<str.size();i++){
			if(isupper(str[i]))
				str[i] = tolower(str[i]);
		}

		if(str==search)
			count++;
	}
	cout<<count<<endl;
	return 0;
}