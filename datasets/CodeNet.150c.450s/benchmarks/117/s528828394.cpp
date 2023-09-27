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
    for (int i = mid + 1; i <= right; i++) {
        B.push(S[i]);
    }
    int j = left;
    while (!A.empty() && !B.empty()) {
        cnt++;
        if (A.front() <= B.front()) {
            S[j++] = A.front();
            A.pop();
        } else {
            S[j++] = B.front();
            B.pop();
        }
    }
    while (!A.empty()) {
        cnt++;
        S[j++] = A.front();
        A.pop();
    }
    while (!B.empty()) {
        cnt++;
        S[j++] = B.front();
        B.pop();
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