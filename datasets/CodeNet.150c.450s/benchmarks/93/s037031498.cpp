#include<iostream>
#include<queue>
using namespace std;

struct Card{
    char picture;
    int  num;
};

int partition(Card A[], int p, int r) {
    int i = p;
    for (int j = p; j < r; j++) {
        if (A[j].num <= A[r].num) {
            swap(A[i++], A[j]);
        }
    }
    swap(A[i], A[r]);
    return i;
}

int merge_sort(Card C[], int left, int right) {
    int cnt = 0;
    if (left == right) return cnt;
    int mid = (left + right) / 2;
    cnt += merge_sort(C, left   , mid  );
    cnt += merge_sort(C, mid + 1, right);
    queue<Card> A;
    queue<Card> B;
    for (int i = left; i <= mid; i++) {
        A.push(C[i]);
    }
    Card tmp;
    tmp.num = 1e9 + 1;
    A.push(tmp);
    for (int i = mid + 1; i <= right; i++) {
        B.push(C[i]);
    }
    B.push(tmp);

    for (int i = left; i <= right; i++) {
        cnt++;
        if (A.front().num <= B.front().num) {
            C[i] = A.front();
            A.pop();
        } else {
            C[i] = B.front();
            B.pop();
        }
    }
    return cnt;
}

void quicksort(Card A[], int p, int r) {
    if (p >= r) return;
    int q = partition(A, p, r);
    quicksort(A, p    , q - 1);
    quicksort(A, q + 1, r    );
}

int main(){
    int n;
    cin >> n;
    Card C_1[n];
    Card C_2[n];
    for (int i = 0; i < n; i++) {
        char c_in;
        int num_in;
        cin >> c_in >> num_in;
        C_1[i].picture = c_in;
        C_2[i].picture = c_in;
        C_1[i].num = num_in;
        C_2[i].num = num_in;
    }
    bool is_unstable = false;
    quicksort(C_1, 0, n - 1);
    merge_sort(C_2, 0, n - 1);
    bool is_stable = true;
    for (int i = 0; i < n; i++) {
        if (C_1[i].picture != C_2[i].picture) {
            is_stable = false;
            break;
        }
    }
    if (is_stable == true) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << C_1[i].picture << " " << C_1[i].num << endl;
    }

    return 0;
}