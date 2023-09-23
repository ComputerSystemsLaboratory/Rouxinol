#include <iostream>

using namespace std;

void print(int *p, int n)
{
    cout << p[0];
    for (int i = 1; i < n; i++) cout << " " << p[i];
    cout << endl;
}

int bubblesort(int *p, int n)
{
    int i, v;
    bool flag = true;
    int count = 0;
    while (flag)
    {
        flag = false;
        for (i = n - 1; i >= 1; i--)
        {
            if (p[i] < p[i - 1])
            {
                v = p[i];
                p[i] = p[i - 1];
                p[i - 1] = v;
                count++;
                flag = true;
            }
        }
    }
    return count;
}

int main(void)
{
    int A[100];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    int count = bubblesort(A, N);
    print(A, N);
    cout << count << endl;
    return 0;
}
