#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Card {
public:
    uint8_t suit;
    int32_t num;

    Card() {
        suit = 'S';
        num = 1;
    }

    Card(uint8_t suit, int32_t num) : suit(suit), num(num) {}

    Card& operator= (int n) {
        num = n;
        return *this;
    }
};


bool operator< (const Card &c1, const Card &c2) {
    return c1.num < c2.num;
}

bool operator<= (const Card &c1, const Card &c2) {
    return c1.num <= c2.num;
}

ostream& operator<< (ostream& os, const Card& c) {
    os << c.suit << " " << c.num;
    return os;
}

template<typename T>
int32_t partition(vector<T> &A, int32_t p, int32_t r) {
    T x = A[r];
    int32_t i = p - 1;

    for (int32_t j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }

    swap(A[i+1], A[r]);

    return i+1;
}

template<typename T>
void quick_sort(vector<T> &A, int32_t p, int32_t r) {
    if (p < r) {
        int32_t q = partition(A, p, r);
        quick_sort(A, p, q-1);
        quick_sort(A, q+1, r);
    }

    return;
}

template<typename T>
int32_t merge(vector<T> &A, int32_t left, int32_t mid, int32_t right) {
    int32_t n1 = mid - left;
    int32_t n2 = right - mid;

    vector<T> L(n1+1);
    vector<T> R(n2+1);
    for (int32_t i = 0; i < n1; i++) {
        L[i] = A[left+i];
    }
    for (int32_t i = 0; i < n2; i++) {
        R[i] = A[mid+i];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int32_t i = 0, j = 0, count = 0;
    for (int32_t k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        count++;
    }

    return count;
}

template<typename T>
int32_t merge_sort(vector<T> &A, int32_t left, int32_t right) {
    if (left + 1 < right) {
        int32_t mid = left + (right - left) / 2;
        int32_t count1 = merge_sort(A, left, mid);
        int32_t count2 = merge_sort(A, mid, right);
        int32_t count3 = merge(A, left, mid, right);
        return count1 + count2 + count3;
    }

    return 0;
}

int main() {
    int32_t n;

    cin >> n;
    vector<Card> deck_q(n);
    for (int32_t i = 0; i < n; i++) {
        cin >> deck_q[i].suit >> deck_q[i].num;
    }
    vector<Card> deck_m(deck_q);

    quick_sort(deck_q, 0, n-1);
    merge_sort(deck_m, 0, n);

    bool is_stable = true;
    for (int32_t i = 0; i < n; i++) {
        if (deck_q[i].suit != deck_m[i].suit) {
            is_stable = false;
            break;
        }
    }

    cout << (is_stable ? "Stable" : "Not stable") << endl;

    for (Card c : deck_q) {
        cout << c << endl;
    }

    return 0;
}