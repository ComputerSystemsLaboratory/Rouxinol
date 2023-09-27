#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
	char ch;
	char aaa[27]="abcdefghijklmnopqrstuvwxyz";
	int i=0;
	int num=0;
	int count[27]={0};

	//cin.getline(ch,1200,'\n');

	while(cin >> ch){
		ch=tolower(ch);
		num=ch-'a';
		count[num]++;
		//i++;
	}
	for(i=0;i<26;i++){
		cout<<aaa[i]<<" : "<<count[i]<<endl;
	}
}