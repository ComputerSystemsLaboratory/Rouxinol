#include<iostream>
using namespace std;

#define MEMO_MAX 100
typedef unsigned long long ULL;

bool Flag_memo_g = true;	//?????¢??????????????????

class Answer
{
public:
	Answer()
	{
		day = 10; year = 365;
		for(int i = 0; i < MEMO_MAX; i++)
		{
			memo[i] = 0;
			Flag_memo[i] = false;
		}
	}
	
	int N;	//??\???
	int day;
	int year;

	ULL memo[MEMO_MAX];
	bool Flag_memo[MEMO_MAX];
	
	ULL count(int cnt);	//??¨??¢?´¢(??±???)
	ULL count_memo(int cnt);	//??¨??¢?´¢(??±???)(?????¢???ver.)
	void set();	//??\???
	void OutPut();	//???????????????
	
	bool empty();	//???????????¶?????????
	bool ans();	//?§£???
};

ULL Answer::count(int cnt)
{
	if( cnt < 0 )
		return 0;
	
	else if( cnt == 0 )
		return 1;
	
	return count(cnt - 1) + count(cnt - 2) + count(cnt - 3);
}


ULL Answer::count_memo(int cnt)
{
	if( cnt < 0 )return 0;
	else if( cnt == 0 )return 1;
	
	if( !(Flag_memo[cnt]) )
	{
		memo[cnt] = count_memo(cnt - 1) + count_memo(cnt - 2) + count_memo(cnt - 3);
		Flag_memo[cnt] = true;
	}
	
	return memo[cnt];
}

void Answer::OutPut()
{
	if( N == 0 )
		return;
	int ans_ = 1;	//??????????????´???
	if( Flag_memo_g )
		ans_ += count_memo( N ) / (day * year);
	
	else if( !Flag_memo_g )
		ans_ += (count( N )) / (day * year);	//??\???
	
	cout << ans_ << endl;
}

void Answer::set()
{
	cin >> N;
}

bool Answer::empty()
{
	if( N == 0 )return false;
	else return true;
}

bool Answer::ans()
{
	set();
	OutPut();
	return empty();
}

int main()
{
	Answer ans;

	while( ans.ans() );
	return 0;
}