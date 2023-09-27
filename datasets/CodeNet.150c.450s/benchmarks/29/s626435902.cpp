#include <iostream>

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
		cout << allocate_array[i];
		i--;
		for (; i >= back; i--) {
			if (allocate_array[i] != INVALID)
				cout << ' ' << allocate_array[i];
		}
		cout << endl;
	}
	/*
	void debug_print()
	{
		cout << "front = " << front
			<< "back = " << back
			<< "size = " << size << endl;
		for (int i = 10; i >= 0; i--) {
				cout << allocate_array[i] << (i == back ? '\0' : ' ');
		}
		cout << endl;
	}
	*/
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
//	number_list.debug_print();
	number_list.print();
	return 0;
}