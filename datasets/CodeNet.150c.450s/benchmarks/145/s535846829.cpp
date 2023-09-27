#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	vector<int> num;
	vector<string> word;
	string code;
	vector<string>::iterator place;
	int he;
	while(cin>>code){
		word.push_back(code);
		for(place=word.begin();*place!=word.back();++place);
		if(place==word.end()-1)num.push_back(1);
		else{
			he=place-word.begin();
			word.pop_back();
			++*(num.begin()+he);
		}
	}
	he=*(max_element(num.begin(),num.end()));
	int i;
	for(i=0;num[i]!=he;++i);
	cout<<word[i]<<' ';
	int siz=1;
	for(i=0;word.begin()+i!=word.end();++i){
		if(word[i].size()>siz)siz=word[i].size();
	}
	for(i=0;word[i].size()!=siz;++i);
	cout<<word[i]<<endl;
	return 0;
}