#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,word;
	int i,counter=0;
	getline(cin,word);
	for(i=0;i<word.size();i++){
		if(word[i]>='A' && word[i]<='Z'){
			word[i]+='a'-'A';
		}
	}
	while(1){
	cin>>str;
		if(str=="END_OF_TEXT"){
			break;
		}
		for(i=0;i<str.size();i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]+='a'-'A';
		}
		}
		if(str==word){
			counter++;
		}
	}
	cout<<counter<<endl;
	return 0;

}