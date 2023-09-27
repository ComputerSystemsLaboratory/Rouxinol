#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int whatKindOf(std::string);

int main()
{
	int n;
	std::string str;
	std::cin >> n;
	for(int i=0; i<n; i++){
		std::cin >> str;
		std::cout << whatKindOf(str) << std::endl;
		for(unsigned int i=0; i<str.length(); i++) str[i] = '\0';
	}
	return 0;
}

int whatKindOf(std::string str)
{
	unsigned int i, len=str.length();
	bool exist = false;
	std::string t1,
		t1_r,
		t2,
		t2_r,
		str2;
	std::vector<std::string> buf;
	std::vector<std::string>::iterator itr, end;
	buf.push_back(str);
	for(i=1; i<len; i++){
		t1 = str.substr(0, i);
		t1_r = t1;
		t2 = str.substr(i, len-i);
		t2_r = t2;
		std::reverse(t1_r.begin(), t1_r.end());
		std::reverse(t2_r.begin(), t2_r.end());

		str2 = t2+t1;
		for(itr = buf.begin(); itr!= buf.end(); itr++)
			if(*itr==str2){
				exist = true;
				break;
			}
		if(exist) exist = false;
		else buf.push_back(str2);

		str2 = t1_r+t2;
		for(itr = buf.begin(); itr!= buf.end(); itr++)
			if(*itr==str2){
				exist = true;
				break;
			}
		if(exist) exist = false;
		else buf.push_back(str2);

		str2 = t2+t1_r;
		for(itr = buf.begin(); itr!= buf.end(); itr++)
			if(*itr==str2){
				exist = true;
				break;
			}
		if(exist) exist = false;
		else buf.push_back(str2);

		str2 = t1+t2_r;
		for(itr = buf.begin(); itr!= buf.end(); itr++)
			if(*itr==str2){
				exist = true;
				break;
			}
		if(exist) exist = false;
		else buf.push_back(str2);

		str2 = t2_r+t1;
		for(itr = buf.begin(); itr!= buf.end(); itr++)
			if(*itr==str2){
				exist = true;
				break;
			}
		if(exist) exist = false;
		else buf.push_back(str2);

		str2 = t1_r+t2_r;
		for(itr = buf.begin(); itr!= buf.end(); itr++)
			if(*itr==str2){
				exist = true;
				break;
			}
		if(exist) exist = false;
		else buf.push_back(str2);

		str2 = t2_r+t1_r;
		for(itr = buf.begin(); itr!= buf.end(); itr++)
			if(*itr==str2){
				exist = true;
				break;
			}
		if(exist) exist = false;
		else buf.push_back(str2);
	}
	return buf.size();
}