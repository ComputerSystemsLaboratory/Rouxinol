#include <stdio.h>

using namespace std;

class LightList
{
private:
	const static int INVALID = -1;
	int front, back, size;
	int *allocate_array;

public:
	LightList(int size) : 
		front(0), back(0), size(0)
	{
		allocate_array = new int[size];
	}
	~LightList()
	{
		delete[] allocate_array;
	}
	void insert(int x)
	{
		allocate_array[front] = x;
		front++;
		size++;
	}
	void remove(int x)
	{
		for (int i = front - 1; i >= back; i--) {
			if (allocate_array[i] == x) {
				allocate_array[i] = INVALID;
				if (i == front - 1)
					front--;
				if (i == back)
					back++;
				break;
			}
		}
	}
	void deleteFirst()
	{
		if (size > 0) {
			front--;
			size--;
		}
	}
	void deleteLast()
	{
		if (size > 0) {
			back++;
			size--;
		}
	}
	void print()
	{
		int i = front - 1;
		while (i >= back && allocate_array[i] == INVALID) i--;
		printf("%d", allocate_array[i]);
		i--;
		for (; i >= back; i--) {
			if (allocate_array[i] != INVALID)
				printf(" %d", allocate_array[i]);
		}
		putchar('\n');
	}
};

int main()
{
	int n, size = 1000020;
	scanf("%d", &n);
	if (n < 1000020) size = n;
	LightList number_list(size);
	char command[12];
	int x;

	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (command[0] == 'i') { // insert x
			scanf("%d", &x);
			number_list.insert(x);
		}
		else { // delete???
			switch (command[6]) {
			case '\0': // delete x
				scanf("%d", &x);
				number_list.remove(x);
				break;
			case 'F': // deleteFirst
				number_list.deleteFirst();
				break;
			case 'L': // deleteLast
				number_list.deleteLast();
				break;
			}
		}
	}
	number_list.print();
	return 0;
}