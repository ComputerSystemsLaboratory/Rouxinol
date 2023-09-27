#include<iostream>
#include<map>
#include<string>
#include<cctype>

int main()
{
	std::string str;
	std::map<std::string,int> frequency;
	std::string longest,frequent;
	int freq=0;
	int len=0;
	
	std::getline(std::cin,str);
	
	str+=' ';
	
	int begin=0;
	bool inword=false;
	for(int i=0;i<str.size();i++)
	{
		std::string word;
		if(!inword&&isalpha(str[i]))
		{
			inword=true;
			begin=i;
		}
		else if(!isalpha(str[i]))
		{
			inword=false;
			word=str.substr(begin,i-begin);
			if(word.size()>len)
			{
				len=word.size();
				longest=word;
			}
			if(frequency.find(word)==frequency.end())
			{
				frequency.insert(std::pair<std::string,int>(word,0));
			}
			if(++frequency[word]>freq)
			{
				freq=frequency[word];
				frequent=word;
			}
		}
	}
	std::cout<<frequent<<' '<<longest<<std::endl;
	return 0;
}