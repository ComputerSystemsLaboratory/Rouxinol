#include<iostream>
#include<string>

using namespace std;

int main(){
	int alpha[26];
	string sen;
	char abc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i=0;i<26;i++) alpha[i]=0;

	while(1){
		getline(cin,sen);
		if(sen.empty()) break;
		for(int i=0;i<sen.size();i++){
			for(int j=0;j<26;j++){
				if(isupper(sen[i])) sen[i]=tolower(sen[i]);
				if(sen[i]==abc[j]) alpha[abc[j]-'a']++;
			}
		}
	}
	for(int i=0;i<26;i++){
		cout<<abc[i]<<" : "<<alpha[i]<<endl;
	}

	return 0;
}