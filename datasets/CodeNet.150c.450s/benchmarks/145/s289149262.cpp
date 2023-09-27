#include <map>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
int main(){
	std::string s;
	std::map<std::string,int> M;
	int maxlen=0;
	while(std::cin>>s){
		maxlen = std::max(maxlen, (int)s.size());
		M[s]++;
	}
	int maxapp=0;
	for(std::map<std::string,int>::iterator it = M.begin(); it != M.end(); ++it){
		maxapp = std::max(maxapp, it->second);
	}	
	for(std::map<std::string,int>::iterator it = M.begin(); it != M.end(); ++it){
		if(maxapp == it->second)std::cout<<it->first<<" ";
	}
	for(std::map<std::string,int>::iterator it = M.begin(); it != M.end(); ++it){
		if(maxlen == (it->first).size())std::cout<<it->first<<std::endl;
	}
	return 0;
}