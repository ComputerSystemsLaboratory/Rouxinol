#include<iostream>
#include<queue>
using namespace std;

long merge(int A[], int left, int right){
    if (left == right) return 0;
    int mid = (left + right) / 2;
    long cnt = 0;
    cnt += merge(A, left, mid);
    cnt += merge(A, mid + 1, right);

    queue<int> a;
    for (int i = left; i <= mid; i++) {
        a.push(A[i]);
    }
    a.push(-1);
    queue<int> b;
    for (int i = mid + 1; i <= right; i++) {
        b.push(A[i]);
    }
    b.push(-1);

    for (int i = left; i <= right; i++) {
        if (a.front() > b.front()) {
            A[i] = a.front();
            cnt += b.size() - 1;
            a.pop();
        } else {
            A[i] = b.front();
            b.pop();
        }
    }
    return cnt;

}

int main(){
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long cnt = merge(A, 0, N - 1);
    cout << cnt << endl;

    return 0;
}