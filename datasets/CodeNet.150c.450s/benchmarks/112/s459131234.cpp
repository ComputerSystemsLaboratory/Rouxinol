
#include <iostream>
#include <string>
#include <vector>
#include <utility> 
#include <tuple>
#include <algorithm>
#include <map>
#include <math.h>
using namespace std;


int main() {
	int n,m;

while(cin>>n &&n!=0){
	map<char, char> ta;
	for(int i=0;i<26;i++){
		ta['a'+i]=i+'a';
	}
	for(int i=0;i<26;i++){
		ta['A'+i]=i+'A';
	}
	for(int i=0;i<10;i++){
		ta['0'+i]=i+'0';
	}
	for(int i=0;i<n;i++){
		char e,f;
		cin>>e>>f;
		ta[e]=f;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		char e;
		cin>>e;
		cout<<ta[e];
	}
	cout<<endl;
	
}



	return 0;
}