/*
 * ITP1_7_A.cpp
 *
 *  Created on: 2016/05/21
 *      Author: suna
 */

#include <iostream>
#include <vector>

using namespace std;

//??°?????????????????±????§???????
struct MathScore
{
	int chukan_point;	//??????????¨?????????°
	int kimatu_point;	//??????????¨?????????°
	int saisi_point;	//???????¨?????????°
};

//???????????\?????¨
void inputData(vector<MathScore> *ms)
{
	MathScore input_ms;

	while(true)
	{
		cin >> input_ms.chukan_point
			>> input_ms.kimatu_point
			>> input_ms.saisi_point;

		if( (input_ms.chukan_point == -1) && (input_ms.kimatu_point == -1) && (input_ms.saisi_point == -1 ) )
		{
			break;
		}
		ms->push_back(input_ms);
	}
}

//????????????
void judgeGrade(vector<MathScore> *ms)
{
	int ABSENCE = -1;	//?¬????
	int sum_chukan_kimatu_point;		//????????¨?????????????¨?
	vector<MathScore>::iterator i;

	for(i = ms->begin(); i != ms->end(); i++)
	{
		if( (i->chukan_point == ABSENCE) || (i->kimatu_point == ABSENCE) )
		{
			cout << "F" << endl;
			continue;
		}

		//??????????¨???¨??????????¨????????¨?
		sum_chukan_kimatu_point = i->chukan_point + i->kimatu_point;

		if( sum_chukan_kimatu_point >= 80)
		{
			cout << "A" << endl;
		}
		else if( (sum_chukan_kimatu_point >= 65) && (sum_chukan_kimatu_point < 80) )
		{
			cout << "B" << endl;
		}
		else if( (sum_chukan_kimatu_point >= 50) && (sum_chukan_kimatu_point < 65) )
		{
			cout << "C" << endl;
		}
		else if( (sum_chukan_kimatu_point >= 30) && (sum_chukan_kimatu_point < 50) )
		{
			if(i->saisi_point >= 50)
			{
				cout << "C" << endl;
			}
			else
			{
				cout << "D" << endl;
			}
		}
		else if(sum_chukan_kimatu_point < 30)
		{
			cout << "F" << endl;
		}
	}
}

int main(void)
{
	//??°????????????????´???¨
	vector<MathScore> math_score;

	//???????????\???
	inputData(&math_score);

	//????????????
	judgeGrade(&math_score);
	return 0;
}