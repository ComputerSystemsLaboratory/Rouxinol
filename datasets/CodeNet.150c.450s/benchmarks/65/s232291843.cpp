#include<iostream>
using namespace std;

struct Stable {
	char Mark, Number;
};

void BubbleSort(Stable* Line, int N) {
	for (int i = 0; i < N; ++i) {
		for (int j = N - 1; j > i; --j) {
			if (Line[j].Number < Line[j - 1].Number) {
				char Case = Line[j].Number;
				Line[j].Number = Line[j - 1].Number;
				Line[j - 1].Number = Case;

				char C = Line[j].Mark;
				Line[j].Mark = Line[j - 1].Mark;
				Line[j - 1].Mark = C;
			}
		}
	}
}

void SelectionSort(Stable* Line, int N) {
	for (int i = 0; i < N; ++i) {
		int minj = i;
		for (int j = i; j < N; ++j) {
			if (Line[j].Number < Line[minj].Number) {
				minj = j;
			}


		}
		char Case = Line[i].Number;
		Line[i].Number = Line[minj].Number;
		Line[minj].Number = Case;

		char C = Line[i].Mark;
		Line[i].Mark = Line[minj].Mark;
		Line[minj].Mark = C;
	}
}

void Show(Stable* Line, int N) {
	for (int i = 0; i < N; ++i) {
		if (i > 0) {
			cout << ' ';
		}
		cout << Line[i].Mark << Line[i].Number;
	}
	cout << endl;
}

bool Check(Stable* LineS, Stable* LineB, int N) {
	for (int i = 0; i < N; ++i) {
		if (LineS[i].Mark != LineB[i].Mark) { return false; }
	}
	return true;
}

int main() {
	int N;
	cin >> N;

	Stable* LineB = new Stable[N];
	Stable* LineS = new Stable[N];

	for (int i = 0; i < N; ++i) {
		cin >> LineB[i].Mark >> LineB[i].Number;


		LineS[i].Mark = LineB[i].Mark;
		LineS[i].Number = LineB[i].Number;
	}

	BubbleSort(LineB, N);
	SelectionSort(LineS, N);

	Show(LineB, N);
	cout << "Stable" << endl;



	Show(LineS, N);
	if (Check(LineS, LineB, N)) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}


	delete[] LineB;
	delete[] LineS;
}
