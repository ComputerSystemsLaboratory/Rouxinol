#include <iostream>

using namespace std;

int main()
{
    const int N = 1000000;

    static bool P[N];
    for (int i=2; i<N; i++)
        P[i] = true;
    for (int i=2; i<N; i++)
        if (P[i])
            for (int j=i+i; j<N; j+=i)
                P[j] = false;

    static int A[N];
    for (int i=1; i<N; i++)
        A[i] = A[i-1] + int(P[i]);

    int n;
    while (cin>>n)
        cout<<A[n]<<endl;
}