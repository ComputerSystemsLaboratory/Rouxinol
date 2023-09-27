#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

vector<string> split(const string &str, char delim){
	vector<string> result;
	size_t current = 0, found;
	while ((found = str.find_first_of(delim, current)) != string::npos){
		result.push_back(string(str, current, found - current));
		current = found + 1;
	}
	result.push_back(string(str, current, str.size() - current));
	return result;
}


int main(){
	string field;
	getline(cin, field);
	vector<std::string> result = split(field, ' ');
	
	int i = 0;
	while(i < result.size()){
		if (result[i] == "*" || result[i] == "-" || result[i] == "+"){
			int Num1, Num2, Answer, PNum1, PNum2;
			// もどして探してくる
			int j = i;
			--j;
			while (result[j] == ""){ --j; }
			PNum1 = j;
			--j;
			while (result[j] == ""){ --j; }
			PNum2 = j;

			Num1 = atoi(result[PNum1].c_str());
			Num2 = atoi(result[PNum2].c_str());

			

			if (result[i] == "*"){
				Answer = Num1 * Num2;
			}
			else if (result[i] == "-"){
				Answer = Num2 - Num1;
			}
			else if (result[i] == "+"){
				Answer = Num1 + Num2;
			}

			char StrToNum[32];
			sprintf(StrToNum, "%d", Answer);
			string pushBack = StrToNum;
			result[PNum2] = pushBack;
			result[PNum1] = "";
			result[i] = "";
			i = 0;
			
		}
		else{
			++i;
		}
	}
	
	cout << result[0] << endl;
	
	return 0;
}