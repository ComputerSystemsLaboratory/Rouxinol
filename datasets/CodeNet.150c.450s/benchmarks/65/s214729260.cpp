#include <iostream>
#include <string>

using namespace std;

struct Card {
    char suit, value;
};

void bubble(Card a[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = n-1; j >= i+1; --j) {
            if (a[j].value < a[j-1].value) {
                Card t = a[j]; a[j] = a[j-1]; a[j-1] = t;
            }
        }
    }
}

void selection(Card a[], int n) {
    for (int i = 0; i < n-1; ++i) {
        int min_j = i;
        for (int j = i+1; j < n; ++j) {
            if (a[j].value < a[min_j].value) min_j = j;
        }
        if (min_j != i) { Card t = a[i]; a[i] = a[min_j]; a[min_j] = t; }
    }
}

void print(Card a[], int n) {
    for (int i = 0; i < n; ++i) {
       if (i) cout << " ";
       cout << a[i].suit << a[i].value;
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    Card a[40], b[40];
    for (int i = 0; i < N; ++i) {
        cin >> a[i].suit >> a[i].value;
    }
    for (int i = 0; i < N; ++i) b[i] = a[i];
    bubble(a, N);
    print(a, N);
    cout << "Stable" << endl;
    selection(b, N);
    print(b, N);
    bool stable = true;
    for (int i = 0; i < N; ++i)
        if (a[i].suit != b[i].suit) stable = false;
    if (stable) cout << "Stable";
    else cout << "Not stable";
    cout << endl;

    return 0;
}