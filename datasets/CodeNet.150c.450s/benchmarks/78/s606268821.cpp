
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <limits.h>
#include <string>
#include <sstream>

using namespace std;

vector<int> GetIntVector()
{
	string str;
	getline(cin,str);
	istringstream line( str );

	istream_iterator<int> iit(line);
	istream_iterator<int> iit_eof;

	vector<int> ret;

	for(;iit != iit_eof; iit++){
		ret.push_back(*iit);
	}

	return ret;
}

int tetrahedralNumber(int count)
{
	return count * (count + 1) * (count + 2) / 6;
}

bool isEven(int num){ return num % 2 == 0; }

int GetMinCombination(vector<int>& numbers,int input,int maxConbination)
{

	int minConbi = INT_MAX;

	vector<int>::reverse_iterator rit = numbers.rbegin();   
	for(; rit != numbers.rend(); rit++)  
	{
		if( (*rit) > input) continue; //ツ妥・ツつォツつ「ツ甘板づ債暗クツつッツづ按つ「ツづ個づ姪淞つキ
		if( (*rit) < input / maxConbination) break; //ツ表ツつオツつォツづェツづ按つ「
		if(input - (*rit) == 0) return 1; //ツ暗ェツづつづ個青板づ表ツつケツつス

		int conbi = GetMinCombination(numbers,input - (*rit),(minConbi == INT_MAX) ? maxConbination - 1 : minConbi - 1);
		if(conbi != INT_MAX)
			minConbi = conbi + 1; //conbiツ青板更ツ新
	}

	return minConbi;
}

void solve(int inputs)
{
	vector<int> tNumbers;
	tNumbers.push_back(0);
	for(int i = 1; inputs > tNumbers[tNumbers.size() - 1]; i++){
		tNumbers.push_back(tetrahedralNumber(i));
	}
	tNumbers.erase(tNumbers.begin());

	int conbi = GetMinCombination(tNumbers,inputs,5);

	vector<int>::iterator rem = remove_if(tNumbers.begin(),tNumbers.end(),isEven);
	tNumbers.erase( rem, tNumbers.end());

	int oddConbi = GetMinCombination(tNumbers,inputs,inputs);

	cout << conbi << ' ' << oddConbi << endl;
}

void C()
{
	int input = GetIntVector()[0];
	while(input){
		solve(input);
		input = GetIntVector()[0];
	}
}
int main()
{
	C();

	return 0;
}