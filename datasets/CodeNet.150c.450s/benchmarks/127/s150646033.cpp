#include<iostream>
#include<string>
#include<set>

std::string RS(std::string str){
	std::string result;
	for(int i=str.length()-1;i>=0;i--){
		result+=str[i];
	}
	return result;
}

int main(){
	int m;
	std::cin>>m;
	for(int ii=0;ii<m;ii++){
		std::string str;
		std::cin>>str;
		std::set<std::string> strs;
		for(int i=1;i<str.length();i++){
			std::string sf=str.substr(0,i);
			std::string sl=str.substr(i);
			//std::cout<<sf<<" "<<sl<<std::endl;
			strs.insert(sf+sl);
			strs.insert(RS(sf)+sl);
			strs.insert(sf+RS(sl));
			strs.insert(RS(sf)+RS(sl));

			strs.insert(sl+sf);
			strs.insert(RS(sl)+sf);
			strs.insert(sl+RS(sf));
			strs.insert(RS(sl)+RS(sf));
		}
		std::cout<<strs.size()<<std::endl;;
	}
}