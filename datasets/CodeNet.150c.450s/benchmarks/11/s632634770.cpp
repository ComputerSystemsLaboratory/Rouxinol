/*
 * FindingMissingCards.cpp
 *
 *  Created on: 2014/07/22
 *      Author: WanWan1985
 */
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
#define CARDS_NUM	(13)
#define ARRAY_SIZE(a)	sizeof(a) / sizeof(a[0])

typedef struct {
	string strTrumpType;
	vector<int> vecCardsNum;
}TrumpTypeSet;

// 各トランプの不足枚数をカウント
TrumpTypeSet CountTheLeftCards(string a_strTrumpType, vector<map<string, int> > a_vecTrumpSet);

int main(void) {

	int iNumber = 0;
	cin >> iNumber;	// 与えられたカード枚数

	vector<map<string, int> > vecTrumpSet;
	for (int i = 0; i < iNumber; i++) {
		int iCardNumber = 0;
		string strPattern = "";
		map<string, int> mapTrumpSet;
		cin >> strPattern >> iCardNumber;
		mapTrumpSet.insert(make_pair(strPattern, iCardNumber));
		vecTrumpSet.push_back(mapTrumpSet);
	}

	string strArray[] = {"S", "H", "C", "D"};
	for (unsigned int i = 0; i < ARRAY_SIZE(strArray); i++) {
		TrumpTypeSet Trump = CountTheLeftCards(strArray[i], vecTrumpSet);
		for (unsigned int j = 0; j < Trump.vecCardsNum.size(); j++) {
			cout << strArray[i] << " " << Trump.vecCardsNum.at(j) << endl;
		}
	}

	return 0;
}

TrumpTypeSet CountTheLeftCards(string a_strTrumpType, vector<map<string, int> > a_vecTrumpSet) {

	vector<bool> vecbCardsType(CARDS_NUM, true);

	TrumpTypeSet TrumpType;
	TrumpType.strTrumpType = a_strTrumpType;
	vector<int> vecCardsNumTmp;
	for (unsigned int i = 0; i < a_vecTrumpSet.size(); i++) {
		map<string, int> mapTrumpSet = a_vecTrumpSet.at(i);
		vecCardsNumTmp.push_back(mapTrumpSet[a_strTrumpType]);
	}

	for (unsigned int i = 0; i < vecCardsNumTmp.size(); i++) {
		int iCardNum = vecCardsNumTmp.at(i);
		for (int j = 0; j < CARDS_NUM; j++) {
			if (iCardNum == j + 1) {
				vecbCardsType.at(j) = false;
			}
		}
	}

	for (unsigned int i = 0; i < vecbCardsType.size(); i++) {
		if (vecbCardsType.at(i)) {
			TrumpType.vecCardsNum.push_back(i+1);
		}
	}

	return TrumpType;
}