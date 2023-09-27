#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main(void){
	string str;
	vector<string> w;
	map<string,int> word;
	unsigned int max=0,length=0;

	while(cin>>str){
		w.push_back(str);
		if(word.find(str) != word.end()){
			word[str]++;//ツ出ツ個サツ嘉アツ青板づーツカツウツδ督ト
		}else{
			word.insert(make_pair(str,1));
		}
	}
	map<string,int>::iterator it;
	for(it=word.begin();it!=word.end();it++){//ツ催頻ツ出ツづーツ仰づ淞づゥ
		if(max<it->second)
			max=it->second;
	}
	for(it=word.begin();it!=word.end();it++){
		if(max==it->second)
			cout<<it->first<<" ";
	}
	for(unsigned int i=0;i<w.size();i++){
		if(length<w[i].size()){
			length=w[i].size();
		}
	}
	for(unsigned int i=0;i<w.size();i++){
		if(length==w[i].size()){
			cout<<w[i]<<endl;
			break;
		}
	}
	return 0;
}