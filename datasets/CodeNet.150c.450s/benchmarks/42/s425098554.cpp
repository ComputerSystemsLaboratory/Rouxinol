#include <iostream>
#include <string>
using namespace std;

struct queue
{
string name;
int time;
};

int tail, head;
queue Q[1000000];

void enqueue(queue x);
queue dequeue();

int main()
{
	int n, q, t = 0, sum = 0;
	string str;
	cin >> n >> q;
	tail = n;
	head = 0;
	for(int i = 0; i < n; i++)
		cin >> Q[i].name >> Q[i].time;

	while(sum != n)
	{	
		if(Q[head].time <= q)
			t += Q[head].time;
		else
			t += q;
		Q[head].time -= q;
		if(Q[head].time<=0)
		{
			cout << Q[head].name << ' ' << t << endl;
			head++;
			sum++;
		}
		else
			enqueue(dequeue());
	}
	return 0;
}

void enqueue(queue x) { Q[tail++] = x; }

queue dequeue() { return Q[head++]; }