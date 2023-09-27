#include <iostream>

using namespace std;

const int MAX = 100000;
const int SENTINEL = 2000000000;

struct Card {
    char suit;
    int val;
};

Card a[MAX], b[MAX];
Card L[MAX/2+1], R[MAX/2+1];

int partition(Card a[], int left, int right) {
    int x = a[right].val;
    int i = left - 1;
    for (int j = left; j < right; ++j) {
        if (a[j].val <= x) {
            ++i;
            Card t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
    }
    Card t = a[right];
    a[right] = a[i+1];
    a[i+1] = t;
    return i + 1;
}

void quick_sort(Card a[], int left, int right) {
    if (left < right) {
        int p = partition(a, left, right);
        quick_sort(a, left, p-1);
        quick_sort(a, p+1, right);
    }
}

void merge(Card a[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    L[n1].val = SENTINEL;
    R[n2].val = SENTINEL;

    for (int i = 0; i < n1; ++i) L[i] = a[left+i];
    for (int j = 0; j < n2; ++j) R[j] = a[mid+j];

    int i = 0, j = 0;
    for (int k = left; k < right; ++k) {
        if (L[i].val <= R[j].val) {
            a[k] = L[i++];
        } else {
            a[k] = R[j++];
        }
    }
}

void merge_sort(Card a[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid, right);
        merge(a, left, mid, right);
    } 
}

void print(Card a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i].suit << " " << a[i].val << endl;
    }
}

int
main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char s;
        int v;
        cin >> s >> v;
        a[i].suit = b[i].suit = s;
        a[i].val = b[i].val = v;
    }

    quick_sort(a, 0, n-1);
    merge_sort(b, 0, n);

    bool stable = true;
    for (int i = 0; i < n; ++i) {
        if (a[i].suit != b[i].suit) {
            stable = false;
            break;
        }
    }
    if (stable) cout << "Stable";
    else cout << "Not stable";
    cout << endl;

    print(a, n);

    return 0;
}