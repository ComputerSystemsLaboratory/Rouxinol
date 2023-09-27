#include <iostream>
#include <string>
#include <vector>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_C&lang=jp
// 安定ソート
static void printArray(vector<string> vector) {
    int size = vector.size();
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            cout << vector[i] << endl;
        } else {
            cout << vector[i] << " ";
        }
    }
}

static string isStable(vector<string> in, vector<string> out) {
    int N = in.size();
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int a = 0; a < N; ++a) {
                for (int b = a + 1; b < N; ++b) {
                    if (in[i].substr(1, 1) == in[j].substr(1, 1) && in[i] == out[b] && in[j] == out[a]) {
                        return "Not stable";
                    }
                }
            }
        }
    }
    return "Stable";
}


int main() {
    int N;
    cin >> N;
    vector<string> cards(N);

    for (int i = 0; i < N; ++i) {
        cin >> cards[i];
    }

    vector<string> bubbleCards(N);
    bubbleCards = cards;

    vector<string> selectionCards(N);
    selectionCards = cards;

    // Bubble Sort
    for (int i = 0; i < N; ++i) {
        for (int j = N - 1; j > i; --j) {
            if (bubbleCards[j].substr(1, 1) < bubbleCards[j - 1].substr(1, 1)) {
                swap(bubbleCards[j], bubbleCards[j - 1]);
            }
        }
    }

    // printArray(bubbleCards);
    // cout << isStable(cards, bubbleCards) << endl;

    // Selection Sort
    for (int i = 0; i < N; ++i) {
        int minj = i;
        for (int j = i; j < N; ++j) {
            if (selectionCards[j].substr(1, 1) < selectionCards[minj].substr(1, 1)) {
                minj = j;
            }
        }
        swap(selectionCards[i], selectionCards[minj]);
    }

    // printArray(selectionCards);
    //cout << isStable(cards, selectionCards) << endl;

    printArray(bubbleCards);
    // cout << "D2 C3 H4 S4 C9" << endl;
    // cout << "Stable" << endl;
    cout << isStable(cards, bubbleCards) << endl;

    printArray(selectionCards);
    // cout << "D2 C3 S4 H4 C9" << endl;
    //cout << "Not stable" << endl;
    cout << isStable(cards, selectionCards) << endl;
    return 0;
}


