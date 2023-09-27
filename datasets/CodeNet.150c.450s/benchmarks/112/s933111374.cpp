#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<map>
#include<algorithm>

using namespace std;

int main(){
	int n1,n2;
	char after,before;
	map<char,char> data;
	char input;

	while(cin>>n1,n1 != 0){
		data.clear();
		for(int i=0;i<n1;i++){
			cin>>before>>after;
			data.insert( pair<char,char>(before,after) );
		}
		cin>>n2;

		for(int i=0;i<n2;i++){
			cin>>input;
			if(data.find(input) == data.end() ){
				cout<<input;
			}else{
				cout<<data[input];
			}
		}
		cout<<endl;
	}
	return 0;
}