#include<iostream>
#include<utility>
using namespace std;
#define INF 1999999999

pair<char, int> P[1000005];
pair<char, int> S[1000005], L[500005], R[500005];
long long sum=0;

void merge(int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i=0; i<n1; i++) {
        L[i] = S[left + i];
    }
    for (int i=0; i<n2; i++) {
        R[i] = S[mid + i];
    }
    L[n1].second = INF;
    R[n2].second = INF;
    int i = 0, j = 0;
    for (int k=left; k<right; k++) {
        if (L[i].second <= R[j].second) {
            S[k] = L[i];
            i++;
        }
        else {
            S[k] = R[j];
            j++;
        }
        sum++;
    }
}

void mergeSort(int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid, right);
        merge(left, mid, right);
    }
    return;
}

int partition(int p, int r) {
    int x, i, j;
    pair<char, int> t;
    x = P[r].second;
    i = p - 1;
    for (j = p; j < r; j++) {
        if (P[j].second <= x) {
            i++;
            t = P[i]; P[i] = P[j]; P[j] = t;
        }
    }
    t = P[i + 1]; P[i + 1] = P[r]; P[r] = t;
    return i + 1;
}

void quickSort(int p, int r) {
    if (p < r) {
        int q = partition(p, r);
        quickSort(p, q - 1);
        quickSort(q + 1, r);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> P[i].first >> P[i].second;
        S[i].first = P[i].first;
        S[i].second = P[i].second;
    }
    quickSort(0, n-1);
    mergeSort(0, n);
    for (int i=0; i<n; i++) {
        if (P[i].first != S[i].first) {
            cout << "Not stable\n";
            break;
        }
        if (i == n - 1) cout << "Stable\n";
    }
    for (int i=0; i<n; i++) {
        cout << P[i].first << " " << P[i].second << endl;
    }
    return 0;
}
