#include<iostream>
#include<string>
#define SA 32
using namespace std;
int main(void){
	string tan;
	cin >> tan;
	int bou,gou,ansa=0;
	bou=tan.size();
	for(int a=0;a<bou;a++){
		if(tan[a]>='A' && tan[a]<='Z')tan[a]+=SA;
	}
	while(1){
		string bin;
		cin>>bin;
		gou=bin.size();
		if(bin=="END_OF_TEXT")break;
		for(int b=0;b<gou;b++){
			if(bin[b]>='A' && bin[b]<='Z')bin[b]+=SA;
		}
		if(tan==bin)ansa++;
	}
	cout << ansa<<endl;
	return 0;
}