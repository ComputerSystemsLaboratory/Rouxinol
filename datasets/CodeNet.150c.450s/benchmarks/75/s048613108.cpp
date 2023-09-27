#include <bits/stdc++.h>
using namespace std;

int N;

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return i * 2;
}

int right(int i) {
    return i * 2 + 1;
}

void maxHeapify(vector<int> &A, int i) {
    int l = left(i);
    int r = right(i);

    int largest;
    // select largest node
    if (l <= N && A.at(l) > A.at(i)) {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if (r <= N && A.at(r) > A.at(largest)) {
        largest = r;
    }

    if (largest != i)
    {
        swap(A.at(i), A.at(largest));
        maxHeapify(A, largest);
    }
}


int main() {
    cin >> N;

    vector<int> A(N+1); // 1 origin vector

    for (int i = 1; i <=  N; i++)
    {
        cin >> A.at(i);
    }

    for (int i = N/2; i >= 1; i--)
    {
        maxHeapify(A, i);
    }

    for (int i = 1; i <= N; i++)
    {
        cout << " " << A.at(i);
    }
    cout << endl;
}
