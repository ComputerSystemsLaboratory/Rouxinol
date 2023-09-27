/*
 * Dice1.cpp
 *
 *  Created on: 2014/08/08
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
#define ALL(a)          (a).begin(), (b).end()
#define FOR(i, a, b)    for(int i = (a); i < (b); i++)
#define REP(i, n)       FOR(i, 0, n)
#define PB              push_back
#define MP              make_pair
#define CL              clear
#define EXIT            (0)
#define PINT            pair<int, int>
 
typedef unsigned int u_int;
typedef long long ll;

enum E_DiceArrayIndex {
	eTOP = (0),
	eSOUTH,
	eEAST
//	eWEST,
//	eNORTH,
//	eDOWN
};

enum E_DiceLavel {
	eOne = (0),
	eTwo,
	eThree,
	eFour,
	eFive,
	eSix,
	eDiceLavelNum
};

// Diceクラス
class Dice {
	vector<int> m_vecDiceNum;
	vector<pair<E_DiceLavel, E_DiceLavel>> m_vecDiceState;
public:
	// 初期状態設定
	void init(const vector<int>& a_vecInputData) {
		REP(i, a_vecInputData.size()) {
			m_vecDiceNum.PB(a_vecInputData.at(i));
		}
		m_vecDiceState.PB(make_pair(eOne, eSix));		// TOP
		m_vecDiceState.PB(make_pair(eTwo, eFive));		// SOUTH
		m_vecDiceState.PB(make_pair(eThree, eFour));	// EAST
	}

	// 移動後のDice配置更新
	void upDateDicePosition(const char& a_chrCommand) {
		if ('S' == a_chrCommand) {
			pair<E_DiceLavel, E_DiceLavel> Top = m_vecDiceState[eTOP];
			pair<E_DiceLavel, E_DiceLavel> South = m_vecDiceState[eSOUTH];
			m_vecDiceState[eSOUTH] = Top;
			m_vecDiceState[eTOP] = make_pair(South.second, South.first);
		} else if ('N' == a_chrCommand) {
			pair<E_DiceLavel, E_DiceLavel> Top = m_vecDiceState[eTOP];
			pair<E_DiceLavel, E_DiceLavel> South = m_vecDiceState[eSOUTH];
			m_vecDiceState[eSOUTH] = make_pair(Top.second, Top.first);
			m_vecDiceState[eTOP] = South;
		} else if ('W' == a_chrCommand) {
			pair<E_DiceLavel, E_DiceLavel> Top = m_vecDiceState[eTOP];
			pair<E_DiceLavel, E_DiceLavel> East = m_vecDiceState[eEAST];
			m_vecDiceState[eTOP] = East;
			m_vecDiceState[eEAST] = make_pair(Top.second, Top.first);
		} else if ('E' == a_chrCommand) {
			pair<E_DiceLavel, E_DiceLavel> Top = m_vecDiceState[eTOP];
			pair<E_DiceLavel, E_DiceLavel> East = m_vecDiceState[eEAST];
			m_vecDiceState[eTOP] = make_pair(East.second, East.first);
			m_vecDiceState[eEAST] = Top;
		}
	}
	// サイコロ上面の数字を取得する
	int GetTopSurfaceNum() {
		pair<E_DiceLavel, E_DiceLavel> Top = m_vecDiceState[eTOP];
		return m_vecDiceNum[Top.first];
	}
};

int main(void) {

	int i, j, k, l, m, n;
	cin >> i >> j >> k >> l >> m >> n;
	vector<int> vecDiceNum;
	vecDiceNum.PB(i);
	vecDiceNum.PB(j);
	vecDiceNum.PB(k);
	vecDiceNum.PB(l);
	vecDiceNum.PB(m);
	vecDiceNum.PB(n);

	string strCommand;
	cin >> strCommand;

	Dice Dice1;
	Dice1.init(vecDiceNum);

	REP(i, strCommand.size()) {
		const char chrCommand = strCommand.at(i);
		Dice1.upDateDicePosition(chrCommand);
	}

	cout << Dice1.GetTopSurfaceNum() << endl;

	return EXIT;
}