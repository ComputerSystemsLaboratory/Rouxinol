#include<iostream>
using namespace std;

int main()
{
    int A[10001];
    int n,i=0;
    while (cin >> n) {
        if (n == 0)break;
        A[i] = n;
        i++;
    }
    for (int j = 0; j < i; j++) {
        cout << "Case " << j + 1 << ": " << A[j] << endl;
    }
    return 0;
}