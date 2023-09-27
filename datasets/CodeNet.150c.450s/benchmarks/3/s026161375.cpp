/*
 * Transformation.cpp
 *
 *  Created on: 2014/08/04
 *      Author: WanWan1985
 */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

// for util
#define FOR(i, a, b) 	for(int i = (a); i < (b); i++)
#define REP(i, n)		FOR(i, 0, n)
#define PB				push_back
#define MP				make_pair
#define CL				clear
#define EXIT			(0)

typedef unsigned int u_int;
typedef long long ll;

#define	COMMAND_REPLACE	"replace"
#define COMMAND_REPLACE_NUM	(7)

#define COMMAND_REVERSE	"reverse"
#define COMMAND_REVERSE_NUM	(7)

#define COMMAND_PRINT	"print"
#define COMMAND_PRINT_NUM	(5)

void command(string& a_rstrTargetWord, string strCommand);

int main(void) {

	// 入力
	string strTargetWord;
	cin >> strTargetWord;
	int iCommandNum = 0;
	cin >> iCommandNum;

	vector<string> vecCommand;
	int iCount = 0;
	while (1) {
		string strCommand;
		getline(cin, strCommand);
		vecCommand.PB(strCommand);
		if (iCommandNum == iCount) {
			break;
		}
		iCount++;
	}

	// 実行
	REP(i, vecCommand.size()) {
		command(strTargetWord, vecCommand.at(i));
	}
	return EXIT;
}

void command(string& a_rstrTargetWord, string strCommand) {
	string::size_type pos = strCommand.find(COMMAND_REPLACE, 0);
	if (pos != string::npos) {
		pos = strCommand.find(" ", COMMAND_REPLACE_NUM + 1);
		int iVal1 = atoi(strCommand.substr(COMMAND_REPLACE_NUM + 1, pos - (COMMAND_REPLACE_NUM + 1)).c_str());
		string::size_type tmppos = strCommand.find(" ", pos + 1);
		int iVal2 = atoi(strCommand.substr(pos + 1, tmppos - pos - 1).c_str());
		string strWord = strCommand.substr(tmppos + 1, strCommand.size());
		a_rstrTargetWord.replace(iVal1, iVal2 - iVal1 + 1, strWord);
		return;
	}
	pos = strCommand.find(COMMAND_REVERSE, 0);
	if (pos != string::npos) {
		pos = strCommand.find(" ", COMMAND_REVERSE_NUM + 1);
		int iVal1 = atoi(strCommand.substr(COMMAND_REVERSE_NUM + 1, pos - (COMMAND_REVERSE_NUM + 1)).c_str());
		string::size_type tmppos = strCommand.find(" ", pos + 1);
		int iVal2 = atoi(strCommand.substr(pos + 1, tmppos - pos - 1).c_str());
		reverse(&a_rstrTargetWord[iVal1], &a_rstrTargetWord[iVal2 + 1]);
		return;
	}
	pos = strCommand.find(COMMAND_PRINT, 0);
	if (pos != string::npos) {
		pos = strCommand.find(" ", COMMAND_PRINT_NUM + 1);
		int iVal1 = atoi(strCommand.substr(COMMAND_PRINT_NUM + 1, pos - (COMMAND_PRINT_NUM + 1)).c_str());
		string::size_type tmppos = strCommand.find(" ", pos + 1);
		int iVal2 = atoi(strCommand.substr(pos, tmppos - pos - 1).c_str());
		cout << a_rstrTargetWord.substr(iVal1, iVal2 - iVal1 + 1) << endl;
		return;
	}
}