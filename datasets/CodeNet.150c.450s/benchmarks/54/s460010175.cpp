#include<cstdio>
#include<iostream>
#include<cmath>
#include<cctype>
#include<cstring>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	string word,in;
	int cnt=0;
	cin>>word;
	while(1){
		cin>>in;
		if(in=="END_OF_TEXT")break;
		for(int i=0;i<in.size();i++){
			if(isupper(in[i]))in[i]=tolower(in[i]);
			
		}
		if(word==in)cnt++;
	}
	cout<<cnt<<endl;


	return 0;

}