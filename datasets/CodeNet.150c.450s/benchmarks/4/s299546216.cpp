#include <iostream>

using namespace std;

#define RESULT_MAX 50
#define RANK_A     80
#define RANK_B     65
#define RANK_C     50
#define RANK_D     30

typedef struct test{
	int  m;				// 中間試験
	int  f;				// 期末試験
	int  r;				// 再試験
	char rank = 'F';
}TEST;

void SetRank(TEST *t_result);

int main()
{
	TEST t_result[RESULT_MAX];
	int  dataNum = 0;				// 格納したデータ数
	
	for(int i = 0; i < RESULT_MAX; i++, dataNum++)
	{
		// 点数の入力
		cin >> t_result[i].m;
		cin >> t_result[i].f;
		cin >> t_result[i].r;
		
		// 入力値が全て-1の場合、何もしないで終了
		if( (-1 == t_result[i].m) && (-1 == t_result[i].f) && (-1 == t_result[i].r) )
		{
			break;
		}
		
		// rankの設定
		SetRank(&t_result[i]);
	}
	
	// ランクの出力
	for(int i = 0; i < dataNum; i++)
	{
		cout << t_result[i].rank << endl;
	}
	
	return 0;
}

// SetRank()
// Function  : A~D, Fのランク付けをする関数
// Param[out]: TEST構造体 (試験の結果が格納された構造体)
// Return    : なし
// Global    : 
void SetRank(TEST *t_result)
{
	// 欠席はFランク
	if( (-1 == t_result->m) || (-1 == t_result->f) )
	{
		t_result->rank = 'F';
		return;
	}
	
	// 中間試験と期末試験の合計を計算
	int sum;
	sum = t_result->m + t_result->f;
	
	// ランク付け
	if(RANK_A <= sum)
	{
		t_result->rank = 'A';
	}
	else if(RANK_B <= sum)
	{
		t_result->rank = 'B';
	}
	else if(RANK_C <= sum)
	{
		t_result->rank = 'C';
	}
	else if(RANK_D <= sum)
	{
		// 再試験がCランクの閾値を超えた場合、Cランク
		if(RANK_C <= t_result->r)
		{
			t_result->rank = 'C';
		}
		else
		{
			t_result->rank = 'D';
		}
	}
	else
	{
		t_result->rank = 'F';
	}
}
