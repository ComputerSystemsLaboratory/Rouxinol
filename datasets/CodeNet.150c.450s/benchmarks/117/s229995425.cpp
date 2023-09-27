#include<iostream>
#include<queue>
using namespace std;

int merge_sort(int S[], int left, int right) {
    int cnt = 0;
    if (left == right) return cnt;
    int mid = (left + right) / 2;
    cnt += merge_sort(S, left   , mid  );
    cnt += merge_sort(S, mid + 1, right);
    queue<int> A;
    queue<int> B;
    for (int i = left; i <= mid; i++) {
        A.push(S[i]);
    }
    A.push(1e9 + 1);
    for (int i = mid + 1; i <= right; i++) {
        B.push(S[i]);
    }
    B.push(1e9 + 1);

    for (int i = left; i <= right; i++) {
        cnt++;
        if (A.front() <= B.front()) {
            S[i] = A.front();
            A.pop();
        } else {
            S[i] = B.front();
            B.pop();
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int S[n];
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int cnt = merge_sort(S, 0, n - 1);
    cout << S[0];
    for (int i = 1; i < n; i++) {
        cout << " " << S[i];
    }
    cout << endl;
    cout << cnt << endl;
    return 0;
}