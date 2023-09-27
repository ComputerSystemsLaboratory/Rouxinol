#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<string> card_list;

bool comp(string a, string b) {
    int x = static_cast<int>(a[1]) - 48;
    int y = static_cast<int>(b[1]) - 48;
    return x < y;
}

int bubbleSort(card_list& A) {
    int N = A.size();
    int c = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = N-1; j > i; --j) {
            if (comp(A[j], A[j-1])) {
                swap(A[j], A[j-1]);
                c++;
            }
        }
    }
    return c;
}

int selectionSort(card_list& A) {
    int N = A.size();
    int c = 0;
    for (int i = 0; i < N; ++i) {
        int min = i;
        for (int j = i; j < N; ++j) {
            if (comp(A[j], A[min])) {
                min = j;
            }
        }
        if (i != min) {
            swap(A[i], A[min]);
            c++;
        }
    }
    return c;
}

void print_card_list(card_list& cards) {
    card_list::iterator it = cards.begin();
    for (; it != cards.end()-1; ++it) {
        cout << *it << " ";
    }
    cout << *it << endl;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    card_list A;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        A.push_back(s);
    }
    card_list B = A;

    bubbleSort(A);
    print_card_list(A);
    cout << "Stable" << endl;

    selectionSort(B);
    print_card_list(B);
    if (equal(A.begin(), A.end(), B.begin())) {
        cout << "Stable";
    } else {
        cout << "Not stable";
    }
    cout << endl;

    return 0;
}