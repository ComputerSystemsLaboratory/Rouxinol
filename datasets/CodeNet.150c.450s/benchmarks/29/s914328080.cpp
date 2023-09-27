#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct _list_ {
	struct _list_ *prev;
	int value;
	struct _list_ *next;
}list;

int main(void) {
	int max, count;
	vector<list> x(2000000);
	string a;

	x[0].value = -1;
	x[1].value = -1;
	x[0].next = &x[1];
	x[1].prev = &x[0];

	count = 1;

	cin >> max;

	for (int i = 0; i < max; i++) {
		cin >> a;

		if (a == "insert") {
			count++;
			cin >> x[count].value;
			x[count].prev = &x[0];
			x[count].next = x[0].next;
			x[0].next->prev = &x[count];
			x[0].next = &x[count];
		}

		else if (a == "delete") {
			list *nextl = x[0].next;
			int b;
			cin >> b;
			for (;;) {
				if (nextl->value == b) {
					nextl->prev->next = nextl->next;
					nextl->next->prev = nextl->prev;
					break;
				}
				if (nextl->value == -1)
					break;
				nextl = nextl->next;
			}
		}

		else if (a == "deleteFirst") {
			x[0].next->next->prev = &x[0];
			x[0].next = x[0].next->next;
		}

		else if (a == "deleteLast") {
			x[1].prev->prev->next = &x[1];
			x[1].prev = x[1].prev->prev;
		}

	}

	list *nextl = x[0].next;

	if (nextl->value != -1) {
		cout << nextl->value;
		nextl = nextl->next;
	}

	for (;;) {
		if (nextl->value == -1)
			break;
		cout << " " << nextl->value;
		nextl = nextl->next;
	}

	cout << endl;

	return 0;
}