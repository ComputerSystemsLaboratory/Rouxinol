#include <iostream>
using namespace std;
const int LEN = 100000;//??????????????§??????
struct pp
{
	char name[10];
	int time;
} P[LEN];
int head, tail, n;
void enqueue(struct pp x)//??\????????°
{
	P[tail] = x;//?°?x?????\??°????°?
	tail = (tail + 1) % LEN;//??¨?????????????????????????????????head=(tail + 1) % LEN??¶??´???????????????
}
struct pp dequeue()//???????????°
{
	struct pp x = P[head];//?°?head??????????????´????´?????????\??????x
	head = (head + 1)%LEN;
	return x;//????????????????´?
}
int min(int a, int b)//??????a???b?????´????°???????
{
	return a < b ? a : b;
}
int main()
{
	int alltime=0;//?´??????¶??´  ?±???¨????????????????§????
	int n, q;//n??¨???????????°???q??¨?????¶??´????????§?°?
	struct pp u;
	cin >> n >> q;
	//?°?????????????????????°?????????
	for (int i = 0; i < n; i++)
	{
		cin >> P[i].name >> P[i].time;	
	}
	head = 0; tail = n;
	//?¨??????¶??´????????¬???
	while (head != tail)
	{
		u = dequeue();//?????´????´???????
		int c = min(q, u.time);//????????¶??´????????§?°??????\????????????????????¶??´
		u.time = u.time - q;//????????????????????????????????¶??´
		alltime = alltime + c;
		if (u.time > 0)
			enqueue(u);//??¶??´????????¬????????\??°????°?
		else
		{
			cout << u.name << " " << alltime << endl;
		}
	}
	return 0;
}