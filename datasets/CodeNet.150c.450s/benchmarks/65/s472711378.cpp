#include <iostream>
#include <string>
using namespace std;

struct Trump{
	string suit;
	string num;
};

void print(Trump trump[], long N){
    for (long i = 0; i < N; i++){
        cout << trump[i].suit << trump[i].num;
        if (i < N - 1) cout << " ";
    }
    cout << endl;
}

void BubbleSort(Trump trump[], long N){
	for (long i = 0; i < N; i++){
		for (long j = N - 1; j >= i && j > 0; j--){
			if (trump[j].num < trump[j - 1].num){
				swap(trump[j], trump[j - 1]);
			}
		}
	}
}

void SelectionSort(Trump trump[], long N){
	for (long i = 0; i < N; i++){
		long minj;
		minj = i;
		for (long j = i; j < N; j++){
			if (trump[j].num < trump[minj].num){
				minj = j;
			}
		}
		Trump tmp;
		tmp = trump[i];
		trump[i] = trump[minj];
		trump[minj] = tmp;
	}
}

bool isStable(Trump card1[], Trump card2[], long N){
    BubbleSort(card1, N);
    SelectionSort(card2, N);
	for (long i = 0; i < N; i++){
        if (card1[i].num == card2[i].num){
            if (card1[i].suit != card2[i].suit){
                return false;
            }
        }
	}
	return true;
}

int main(){
	long N;
	cin >> N;
    string c;
	Trump card1[36];
	Trump card2[36];
	for (long i = 0; i < N; i++){
		cin >> c;
        card1[i].suit = c[0];
        card1[i].num = c[1];
	}
	for (long i = 0; i < N; i++){
		card2[i] = card1[i];
	}
	BubbleSort(card1, N);
	SelectionSort(card2, N);
    print(card1, N);
	cout << "Stable" << endl;
    print(card2, N);
	if (isStable(card1, card2, N)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	return 0;
}