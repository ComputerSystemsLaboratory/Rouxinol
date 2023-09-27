#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

struct WordRanking
{
	WordRanking(){}

	WordRanking(std::string word, int count):m_word(word),m_count(count)
	{
	}

	std::string m_word;

	int m_count;
};

int MaxNum(std::vector<WordRanking> rank)
{
	if(rank.empty())
	{
		return 0;
	}

	int max = rank[0].m_count;

	int maxNum=0;

	for(size_t i=1; i<rank.size(); ++i)
	{
		if(rank[i].m_count>max)
		{
			max = rank[i].m_count;

			maxNum = i;
		}
	}

	return maxNum;
}


int main()
{
	std::string str;

	//while(1){
		getline(std::cin,str);

		if(std::cin.eof())
		{
			exit(1);
		}

		std::stringstream ss;

		std::vector<std::string> word;

		ss << str;

		std::string hoge;

		for(; !(ss.eof());)
		{
			ss >> hoge;

			word.push_back(hoge);
		}

		std::sort(word.begin(),word.end());

		std::string temp = "";

		std::vector<WordRanking> rankFriq;

		for(size_t i=0; i<word.size(); ++i)
		{
			if(temp != word[i])
			{
				rankFriq.push_back(WordRanking(word[i],1));
			}
			else
			{
				++rankFriq[rankFriq.size()-1].m_count;
			}

			temp = word[i]; 
		}

		std::vector<WordRanking> rankLength;

		for(size_t i=0; i<word.size(); ++i)
		{
			rankLength.push_back(WordRanking(word[i],word[i].length()));
		}

		std::cout << rankFriq[MaxNum(rankFriq)].m_word << ' ' << rankLength[MaxNum(rankLength)].m_word << '\n';
		
	//}
}