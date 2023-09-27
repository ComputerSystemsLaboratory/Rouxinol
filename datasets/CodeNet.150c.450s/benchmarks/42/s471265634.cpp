#include <iostream>

using namespace std;


#define SIZE 1000001

struct Process
{
	char name[10];
	int time;
};

Process queue[SIZE];
int head = 0;
int tail = 0;

void enqueue(Process p)
{
	queue[tail] = p;
	tail = (tail + 1) % SIZE;
}

Process dequeue()
{
	Process p = queue[head];
	head = (head + 1) % SIZE;
	return p;
}

int main(int argc, char const *argv[])
{
	int n, q;
	int t = 0;
	Process p;
	cin >> n >> q;
	for (int i = 0; i < n; ++i)
	{
		cin >> queue[i].name >> queue[i].time;
	}
	tail = n;
	while(head != tail)
	{
		p = dequeue();
		if (p.time <= q)
		{
			cout << p.name << " " << (t + p.time) << endl;
			t += p.time;
		} else {
			p.time -= q;
			enqueue(p);
			t += q;
		}
	}
}