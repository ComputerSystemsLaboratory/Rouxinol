// 2015/06/02 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Stack{
private:
	int sp;			// スタックポインタ
	int S[100];		// スタックの配列
public:
	Stack()			{  sp = 0;  }
	bool isFull() const	{  return (sp==100);  }
	bool isEmpty() const	{  return (sp==0);  }
	void push(int d);
	int top();
	void pop();
};

void Stack::push(int d)
{
	if(isFull())
		return;		// 満杯

	S[sp++] = d;		// スタックにデータを追加する
}

int Stack::top()
{
	if(isEmpty())
		return -1;	// 異常終了（空）

	return S[sp-1];		// 頂上のデータ
}

void Stack::pop()
{
	if(isEmpty())
		return;		// 空

	sp--;			// スタックからデータを取り出す
}


int main()
{
	Stack s;

	string exp;
	getline(cin, exp);	// 1行読み込み

	istringstream is(exp);	// 入力ストリーム

	while(!is.eof()){
		string opr;
		is >> opr;

		int tmp1, tmp2;

		switch(opr[0]){
		case '+':
			tmp1 = s.top();  s.pop();
			tmp2 = s.top();  s.pop();
			s.push(tmp2+tmp1);
			break;
		case '-':
			tmp1 = s.top();  s.pop();
			tmp2 = s.top();  s.pop();
			s.push(tmp2-tmp1);
			break;
		case '*':
			tmp1 = s.top();  s.pop();
			tmp2 = s.top();  s.pop();
			s.push(tmp2*tmp1);
			break;
		default:
			istringstream is2(opr);
			is2 >> tmp1;
			s.push(tmp1);
			break;
		}
	}

	cout << s.top() << endl;

	return 0;
}