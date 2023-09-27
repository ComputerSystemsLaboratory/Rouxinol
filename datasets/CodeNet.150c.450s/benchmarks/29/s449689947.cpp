#include <iostream>

using namespace std;

class LightList
{
private:
	const static int INVALID = -1;
	int front, back;
	int *allocate_array;

public:
	LightList(int size) : 
		front(0), back(0)
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
		front--;
	}
	void deleteLast()
	{
		back++;
	}
	void print()
	{
		int i = front - 1;
		while (i >= back && allocate_array[i] == INVALID) i--;
		cout << allocate_array[i];
		i--;
		for (; i >= back; i--) {
			if (allocate_array[i] != INVALID)
				cout << ' ' << allocate_array[i];
		}
		cout << endl;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, size = 1000020;
	cin >> n;
	if (n < 1000020) size = n;
	LightList number_list(size);

	for (int i = 0; i < n; i++) {
		char command[12];
		int x;
		cin >> command;
		if (command[0] == 'i') { // insert x
			cin >> x;
			number_list.insert(x);
		}
		else { // delete???
			switch (command[6]) {
			case '\0': // delete x
				cin >> x;
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