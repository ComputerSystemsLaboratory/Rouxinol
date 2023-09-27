#include <iostream>
#include <utility>

using namespace std;

struct card
{
	char suit;
	int value;
};

void output(int n, card elements[])
{
	for (int i = 0; i < n - 1; i++)
		cout << elements[i].suit << elements[i].value << " ";
	cout << elements[n - 1].suit << elements[n - 1].value << endl;
}

int bubble_sort(int n, card elements[])
{
	int swap_count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; i < j; j--) {
			//output(n, elements);
			if (elements[j].value < elements[j - 1].value)
				swap(elements[j], elements[j - 1]), swap_count++;
		}
	}
	return swap_count;
}


int selection_sort(int n, card elements[])
{
	int swap_count = 0;
	for (int i = 0; i < n; i++) {
		int minimam = i;
		// select minimam element
		for (int j = i + 1; j < n; j++) {
			if (elements[j].value < elements[minimam].value)
				minimam = j;
		}
		// output(n, elements);
		if (minimam != i)
			swap(elements[i], elements[minimam]), swap_count++;
	}
	return swap_count;
}

bool equals_suit(int n, card elements1[], card elements2[])
{
	for (int i = 0; i < n; i++)
		if (elements1[i].suit != elements2[i].suit) return false;
	return true;
}

int main()
{
	int n;
	card bubble_elems[36], sel_elems[36];

	// input
	cin >> n;
	for (int i = 0; i < n; i++) {
		char input[3]; // 0: suit, 1: value, 2: NULL(\0)
		cin >> input;
		bubble_elems[i].suit = input[0];
		bubble_elems[i].value = input[1] - '0';
		sel_elems[i] = bubble_elems[i];
	}

	// sort bubble_sort
	bubble_sort(n, bubble_elems);
	output(n, bubble_elems);
	cout << "Stable" << endl;
	
	// sort selection_sort
	selection_sort(n, sel_elems);
	output(n, sel_elems);
	// judge stable
	if (equals_suit(n, bubble_elems, sel_elems))
		cout << "Stable" << endl;
	else
		cout << "Not stable" << endl;
	return 0;
}