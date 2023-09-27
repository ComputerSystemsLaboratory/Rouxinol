#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n, q, head = -1, tail, time_queue[100001] = { }, now = 0;
	char name_queue[100001][15];
	cin >> n >> q;
	for (int i = 0; i < n; i++)
		cin >> name_queue[i] >> time_queue[i];
	tail = (n - 1) % 100001;
	while (tail != head)
	{
	    head = (head + 1) % 100001;
		if (time_queue[head] <= q)
		{
			now += time_queue[head];
			cout << name_queue[head] << " " << now << endl;
		}
		else
		{
			now += q;
			time_queue[(tail + 1) % 100001] = time_queue[head] - q;
			strcpy(name_queue[(tail + 1) % 100001], name_queue[head]);
			tail = (tail + 1) % 100001;
		}
	}

	return 0;
}
