#include <iostream>
#include <algorithm>
using namespace std;

const int MAXSIZE = 2000005;
int htop = 0;	// same as hsize
int Heap[MAXSIZE];

void insert(int x);
int extract(void);

void interact(char command[])
{
	switch (command[0])
	{
	case 'I':
	case 'i':
		int k;
		cin >> k;
		insert(k);
		break;
	case 'E':
	case 'e':
		cout << extract() << endl;
		break;
	default:
		break;
	}
}

int main()
{
	char command[32];
	cin >> command;
	while (!(command[0] == 'e' && command[1] == 'n'))
	{
		interact(command);
		cin >> command;
	}
}

void max_heapify(int arr[], int ia)
{
	int left = ia * 2, right = ia * 2 + 1;
	int largest = ia;

	if (left <= htop && arr[left] > arr[ia])
		largest = left;
	if (right <= htop && arr[right] > arr[largest])
		largest = right;

	if (largest != ia)
	{
		swap(arr[ia], arr[largest]);
		max_heapify(arr, largest);
	}
}

void insert(int x)
{
	Heap[++htop] = x;
	int cur = htop;
	int pa = cur / 2;
	while (pa > 0 && Heap[pa] < Heap[cur])
	{
		swap(Heap[pa], Heap[cur]);
		cur = pa;
		pa = pa / 2;
	}
}

inline bool is_h_empty(void)
{
	return htop <= 0;
}

int extract()
{
	if (is_h_empty())
		return (-2147483647 - 1);
	int ret = Heap[1];
	Heap[1] = Heap[htop--];
	max_heapify(Heap, 1);
	return ret;
}