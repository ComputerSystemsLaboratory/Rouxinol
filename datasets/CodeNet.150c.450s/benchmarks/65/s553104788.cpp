#include <iostream>

using namespace std;

struct Card {
    char suit;
    int value;
};

bool operator==(const Card& lhs, const Card& rhs) {
    return (lhs.suit == rhs.suit && lhs.value == rhs.value);
}

bool isStable(Card in[], Card out[], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            for (int a = 0; a < N; a++) {
                for (int b = a+1; b < N; b++) {
                    if (in[i].value == in[j].value && in[i] == out[b] && in[j] == out[a]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

void trace(Card A[], int N) {
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << A[i].suit << A[i].value;
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    Card in[N], out1[N], out2[N];
    for (int i = 0; i < N; i++) {
        cin >> in[i].suit >> in[i].value;
    }

    for (int i = 0; i < N; i++) {
        out1[i] = in[i];
        out2[i] = in[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = N-1; j >= i + 1; j--) {
            if (out1[j].value < out1[j-1].value) {
                swap(out1[j], out1[j-1]);
            }
        }
    }

    trace(out1, N);
    if (isStable(in, out1, N)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (out2[j].value < out2[minj].value) {
                minj = j;
            }
        }
        swap(out2[i], out2[minj]);
    }

    trace(out2, N);
    if (isStable(in, out2, N)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}