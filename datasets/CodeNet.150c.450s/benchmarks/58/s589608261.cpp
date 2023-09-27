#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
using namespace std;
string S;
vector<int>Cal;
vector<string>SS;
int st(string S){
	int res = 0;
	int i;
	for (i = 0; i < (int)S.length();i++){
		res += (S[i] - '0');
		if (i != (int)S.length()-1)res *= 10;
	}
	return res;
}
int main()
{
	int i;
	int cou = 0;
	int X; int Y;
	getline(cin, S);
	for (i = 0; i < S.length(); i++){
		if (S[i] == ' '){
			SS.push_back(S.substr(cou, i - cou));
			cou = i + 1;
		}
	}
	SS.push_back(S.substr(cou, S.length() - cou));
	for (i = 0; i < (int)SS.size(); i++){
		if (SS[i] == "+"){
			X = Cal[(int)Cal.size() - 2]; Y = Cal[(int)Cal.size() - 1];
			Cal.erase(Cal.end() - 1); Cal.erase(Cal.end() - 1);
			Cal.push_back(X + Y);
		}
		else if (SS[i] == "-"){
			X = Cal[(int)Cal.size() - 2]; Y = Cal[(int)Cal.size() - 1];
			Cal.erase(Cal.end() - 1); Cal.erase(Cal.end() - 1);
			Cal.push_back(X - Y);
		}
		else if (SS[i] == "*"){
			X = Cal[(int)Cal.size() - 2]; Y = Cal[(int)Cal.size() - 1];
			Cal.erase(Cal.end() - 1); Cal.erase(Cal.end() - 1);
			Cal.push_back(X * Y);
		}
		else{
			Cal.push_back(st(SS[i]));
		}
	}
	printf("%d\n", Cal[0]);
	return 0;
}