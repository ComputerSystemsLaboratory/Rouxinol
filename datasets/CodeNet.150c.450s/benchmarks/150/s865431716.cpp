#include <iostream>
using namespace std;

static const int MAX_N = 2000001;
static const u_short MAX_ELEM = 10000;

void countingSort(u_short A[], u_short Bucket[], int k, int size) {

    int Count[k + 1];
    int i, j;

    for (i = 0; i <= k; i++) {
        Count[i] = 0;
    }

    for (j = 0; j < size; j++) {
        Count[A[j]]++;
    }

    for (i = 1; i <= k; i++) {
        Count[i] = Count[i] + Count[i - 1];
    }

    for (j = 0; j < size; j++) {
        Bucket[Count[A[j]]] = A[j];
        Count[A[j]] -= 1;
    }
}

int main() {
    int N, i;

    cin >> N;

    u_short* In = (u_short *)malloc(N * sizeof(short) + 1);
    u_short* Out = (u_short *)malloc(N * sizeof(short) + 1);

    for (i = 0; i < N; i++) {
        cin >> In[i];
    }
    
    countingSort(In, Out, MAX_ELEM, N);

    for (i = 1; i <= N; i++) {
        if (i > 1) {
            cout << " ";
        }
        cout << Out[i];
    }

    cout << endl;

    return 0;
}
