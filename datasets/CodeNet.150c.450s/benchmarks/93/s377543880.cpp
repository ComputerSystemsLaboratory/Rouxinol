#include <bits/stdc++.h>
#define rep(i, n) for(i = 0; i < n; i++)
using namespace std;

struct Card {
    string suit;
    int num;
};

vector<Card> S;

void merge(vector<Card>& A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<Card> L(n1+1);
    vector<Card> R(n2+1);
    int i;
    rep(i, n1) {
        L[i] = A[left + i];
    }
    rep(i, n2) {
        R[i] = A[mid + i];
    }
    L[n1].num = 1000000001;
    R[n2].num = 1000000001;
    int x = 0, y = 0;
    for (int k = left; k < right; k++) {
        if (L[x].num <= R[y].num) {
            A[k] = L[x];
            x++;
        } else {
            A[k] = R[y];
            y++;
        }
    }
}

void mergeSort(vector<Card>& A, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int partition(vector<Card>& A, int p, int r) {
    int x = A[r].num;
    int i = p - 1;
    for (int j=p; j<r; j++) {
        if (A[j].num <= x) {
            i++;
            Card temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    Card temp = A[i+1];
    A[i+1] = A[r];
    A[r] = temp;
    return i+1;
}

void quickSort(vector<Card>& A, int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

int main() {
    int n;
    cin >> n;
    int i;
    rep(i, n) {
        string inputSuit;
        int inputNum;
        cin >> inputSuit >> inputNum;
        Card input = {inputSuit, inputNum};
        S.push_back(input);
    }

    vector<Card> T(S.size());
    copy(S.begin(), S.end(), T.begin());

    quickSort(S, 0, n-1);
    mergeSort(T, 0, n);

    bool flag = true;
    rep(i, n) {
        if (S[i].suit != T[i].suit)
            flag = false;
    }

    if (flag) cout << "Stable" << endl;
    else cout << "Not stable" << endl;

    rep(i, n) {
        cout << S[i].suit << " " << S[i].num << endl;
    }

    return 0;
}

