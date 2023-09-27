#include<iostream>
#include<string>
using namespace std;
int henkan(string);
int main(){
	bool *dictionary;
	dictionary=new bool[henkan("TTTTTTTTTTTT")];
	for(int i=0;i<sizeof(dictionary)/sizeof(bool);++i){
		dictionary[i]=false;
	}
	int n;
	cin>>n;
	string code,word;
	for(int i=0;i<n;++i){
		cin>>code>>word;
		if(code[0]=='i'){
			dictionary[henkan(word)]=true;
		}else{
			if(dictionary[henkan(word)]==true)cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
	}
	return 0;
}

int henkan(string str){
	int a=0;
	switch(str[0]){
		case 'A':
			a+=1;
			break;
		case 'C':
			a+=2;
			break;
		case 'G':
			a+=3;
			break;
		case 'T':
			a+=4;
			break;
	}
	a*=5;
	for(int i=1;i<str.size();++i){
		switch(str[i]){
		case 'A':
			a+=1;
			break;
		case 'C':
			a+=2;
			break;
		case 'G':
			a+=3;
			break;
		case 'T':
			a+=4;
			break;
		}
		a*=5;
	}
	return a;
}