#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
                cin >> A[i];
        for (int i = 1; i <= N; i++) {
                for (int j = 0; j < N; j++)
                        cout << A[j] << (j == N - 1 ? '\n' : ' ');
                if (i == N)
                        break;
                int v = A[i], j;
                for (j = i - 1; j >= 0 && A[j] > v; j--)
                        A[j+1] = A[j];
                A[j+1] = v;
        }
        return 0;
}