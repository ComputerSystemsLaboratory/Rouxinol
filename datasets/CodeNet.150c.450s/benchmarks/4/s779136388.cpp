/*
 * Grading.cpp
 *
 *  Created on: 2014/07/31
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
using namespace std;

#define EXIT (0)

typedef struct {
	int a_iMidtermScore;
	int a_iFinalScore;
	int a_iRetryScore;
}ScoreData;

int main(void) {

	int iMidtermScore, iFinalScore, iRetryScore;
	vector<ScoreData> vecScoreDate;
	while (1) {
		cin >> iMidtermScore >> iFinalScore >> iRetryScore;
		if ((-1 == iMidtermScore) && (-1 == iFinalScore) && (-1 == iRetryScore)) {
			break;
		}
		ScoreData Data;
		Data.a_iMidtermScore = iMidtermScore;
		Data.a_iFinalScore = iFinalScore;
		Data.a_iRetryScore = iRetryScore;
		vecScoreDate.push_back(Data);
	}

	for (unsigned int i = 0; i < vecScoreDate.size(); i++) {
		ScoreData Data = vecScoreDate.at(i);
		int iSumScore = Data.a_iMidtermScore + Data.a_iFinalScore;
		if ((Data.a_iMidtermScore == -1) || (Data.a_iFinalScore == -1)) {
			cout << "F" << endl;
		} else if (iSumScore >= 80) {
			cout << "A" << endl;
		} else if ((65 <= iSumScore) && (iSumScore < 80)) {
			cout << "B" << endl;
		} else if ((50 <= iSumScore) && (iSumScore < 65)) {
			cout << "C" << endl;
		} else if ((30 <= iSumScore) && (iSumScore < 50)) {
			if (Data.a_iRetryScore >= 50) {
				cout << "C" << endl;
			} else {
				cout << "D" << endl;
			}
		} else if (iSumScore < 30) {
			cout << "F" << endl;
		}
	}

	return EXIT;
}