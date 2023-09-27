#include <iostream>
#include <cstdlib>
using namespace std;

const int STACKMAX = 50;
typedef int elementtype;

typedef struct {
	elementtype elem[STACKMAX];
	int position;
} stack;

void initstack(stack *s) {
	s->position = 0;
}

void push (stack *s, elementtype x) {
	if (s->position >= STACKMAX) {
		cout << "stack overflow" << endl;
		exit(0);
	} else {
		s->elem[s->position] = x;
		s->position++;
	}
}

elementtype pop (stack *s) {
	elementtype element;

	if (s->position < 0) {
		cout << "stack underflow" << endl;
		exit(0);
	} else {
		s->position--;
		return s->elem[s->position];
	}

}

void print (stack *s) {
	for (int i = 0; i < s->position; i++) cout << s->elem[i];
	cout << "\n";
}

int main(void) {
	cin.tie(0);
	//ios::sync_with_stdio(false);

	int n, r, p, c, i = 1;
	stack *cards1 = (stack *)malloc(sizeof(stack)), *cards2 = (stack *)malloc(sizeof(stack));

	while (cin >> n >> r, n | r) {
		int a[n];
		i = 1;
		for (int k = n - 1; k >= 0; k--) a[k] = i++;
		for (int i = 0; i < r; i++) {
			cin >> p >> c;

			initstack(cards1);
			initstack(cards2);

			for (int j = 0; j < p + c - 1; j++) {
				if(j < p - 1) {
					push(cards1, a[j]);
				} else {
					push(cards2, a[j]);
				}
			}

		//	print(cards1);
		//	print(cards2);

			for (int l = p + c - 2; l >= 0; l--) {
				if (cards1->position != 0) {
					a[l] = pop(cards1);
				} else {
					a[l] = pop(cards2);
				}
			}
		}

		cout << a[0] << "\n";
	}

	free(cards1);
	free(cards2);

	return 0;
}