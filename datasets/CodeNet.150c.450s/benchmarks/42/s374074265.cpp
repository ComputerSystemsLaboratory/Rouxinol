// 2015/06/02 Tazoe

#include <iostream>
#include <string>
using namespace std;

class Proc{
public:
	string nam;
	int tim;
	Proc(){  nam = "";  tim = 0;  }
};

Proc Q[100001];


class Queue{
private:
	int fp;			// 先頭ポインタ
	int rp;			// 末尾ポインタ
public:
	Queue()			{  fp = 0;  rp = 0;  }
	int next(int p) const	{  return (p+1)%100001;  }
	bool isFull() const	{  return (next(rp)==fp);  }
	bool isEmpty() const	{  return (rp==fp);  }
	void enqueue(Proc d);
	Proc front();
        void dequeue();
};

void Queue::enqueue(Proc d)
{
	if(isFull())
		return;		// 満杯

	Q[rp] = d;
	rp = next(rp);		// キューにデータを追加する
}

Proc Queue::front()
{
	if(isEmpty()){
		Proc er;
		er.tim = -1;
		return er;	// 異常終了（空）
	}

	return Q[fp];		// 先頭のデータ
}

void Queue::dequeue()
{
	if(isEmpty())
		return;		// 空

	fp = next(fp);		// キューからデータを取り出す
}


int main()
{
	Queue que;

	int n, q;
	cin >> n >> q;

	for(int i=0; i<n; i++){
		Proc p;
		cin >> p.nam >> p.tim;

		que.enqueue(p);
	}

	int total_tim = 0;

	while(!que.isEmpty()){
		Proc p = que.front();  que.dequeue();

		if(p.tim<=q){
			total_tim += p.tim;

			cout << p.nam << ' ' << total_tim << endl;
		}
		else{
			total_tim += q;
			p.tim -= q;

			que.enqueue(p);
		}
	}

	return 0;
}