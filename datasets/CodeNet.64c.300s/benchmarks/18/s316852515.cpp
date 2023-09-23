#include<iostream>
using namespace std;

class Answer
{
public:
	Answer(){day = 10; year = 365;}
	
	int N;	//??\???
	int day;
	int year;
	unsigned long long count(int cnt);	//??¨??¢?´¢(???)
	void set();	//??\???
	void OutPut();	//???????????????
	
	bool empty();	//???????????¶?????????
	bool ans();	//?§£???
};

unsigned long long Answer::count(int cnt)
{
	if( cnt < 0)
		return 0;
	
	else if(cnt == 0)
		return 1;
	
	return count(cnt - 1) + count(cnt - 2) + count(cnt - 3);
}

void Answer::OutPut()
{
	if( N == 0 )
		return;
	int ans_ = 1;	//??????????????´???
	ans_ += (count( N )) / (day * year);	//??\???
	
	cout << ans_ << endl;;
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