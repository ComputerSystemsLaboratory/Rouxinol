#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T> class Queue
{
private:
	vector<T> q;
	int head;
	int tail;
	bool is_full;
	bool is_empty;
public:
	Queue(int n)
	{
		q.resize(n);
		head = 0;
		tail = 0;
		is_full = false;
		is_empty = true;
	}
	bool isEmpty()
	{
		return is_empty;
	}
	bool isFull()
	{
		return is_full;
	}
	void enqueue(T a)
	{
		if (this->is_full)
		{
			cout << "ERROR : Queue is full" << endl;
			return;
		}
		else if (this->is_empty)
		{
			this->is_empty = false;
		}
		if (tail == q.size() - 1)
		{
			q[tail] = a;
			tail = 0;
		}
		else
		{
			q[tail++] = a;
		}
		if (tail == head)
		{
			is_full = true;
		}
	}
	T dequeue()
	{
		T ret;
		if (this->is_empty)
		{
			cout << "ERROR : Queue is empty" << endl;
			return NULL;
		}
		else if (this->is_full)
		{
			this->is_full = false;
		}
		if (head == q.size() - 1)
		{
			ret = q[head];
			head = 0;
		}
		else
		{
			ret = q[head++];
		}
		if (tail == head)
		{
			this->is_empty = true;
		}
		return ret;
	}
};

int main()
{
	int n, q;
	cin >> n >> q;
	string name;
	int time;
	Queue<string> q_name(n);
	Queue<int> q_time(n);
	for (int i = 0; i < n; i++)
	{
		cin >> name >> time;
		q_name.enqueue(name);
		q_time.enqueue(time);
	}
 	int timestamp = 0;
	Queue<string> out_name(n);
	Queue<int> out_time(n);
	while (!q_name.isEmpty())
	{
		name = q_name.dequeue();
		time = q_time.dequeue();
		if (q >= time)
		{
			timestamp += time;
			out_name.enqueue(name);
			out_time.enqueue(timestamp);
		}
		else
		{
			timestamp += q;
			q_name.enqueue(name);
			q_time.enqueue(time - q);
		}
	}
	while (!out_name.isEmpty())
	{
		cout << out_name.dequeue() << " " << out_time.dequeue() << endl;
	}
    return 0;
}
