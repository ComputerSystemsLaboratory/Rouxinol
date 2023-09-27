#include<iostream>
#include<string>

using namespace std;

const int MAX = 100001;
int alltime = 0;

class pro
{
public:
	string name;
	int time;
	void input(string, int);
	void print();
	pro& operator=(const pro);
};

void pro::input(string name, int time)
{
	pro::name = name;
	pro::time = time;
}

void pro::print()
{
	cout << name << " " << alltime << endl;
}

pro& pro::operator=(const pro pro)
{
	name = pro.name;
	time = pro.time;
	return *this;
}

class queue
{
private:
	pro s[MAX];
	int head;
	int tail;
public:
	queue();
	void initialize();
	bool empty();
	bool full();
	void enqueue(pro);
	pro dequeue();
	void rein(int);
};

queue::queue()
{
	head = tail = 0;
}

void queue::initialize()
{
	head = tail = 0;
}

bool queue::empty()
{
	return head == tail;
}

bool queue::full()
{
	if (tail + 1 == MAX)return head == 0;
	else return head == tail + 1;
}

void queue::enqueue(pro x)
{
	if (full())return;
	s[tail] = x;
	tail++;
	if (tail == MAX)tail = 0;
}

pro queue::dequeue()
{
	if (empty()){pro a;a.input("a",0);return a;}
	pro v = s[head];
	head++;
	if (head == MAX)head = 0;
	return v;
}

void queue::rein(int q)
{
	int a;
	if (tail == 0)a = MAX - 1;
	else a = tail - 1;
	s[a].time -= q;
}

int main()
{
	queue queue;
	pro now;
	int n, q, i, time;
	string str;
	cin >> n >> q;
	for (i = 0; i < n; i++)
	{
		cin >> str >> time;
		now.input(str, time);
		queue.enqueue(now);
	}
	while (!queue.empty())
	{
		now = queue.dequeue();
		if (now.time <= q)
		{
			alltime += now.time;
			now.print();
		}
		else
		{
			alltime += q;
			queue.enqueue(now);
			queue.rein(q);
		}
	}
    return 0;
}