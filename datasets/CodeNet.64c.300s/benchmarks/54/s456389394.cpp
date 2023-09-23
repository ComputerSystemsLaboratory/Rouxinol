#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int num[101];
    for (int i = 0; i < n-1; i++) 
        cin >> num[i];
    int dest;
    cin >> dest;

    long long a[21][101] = {};
    a[num[0]][0] = 1;
    for (int i = 1; i < n-1; i++) 
        for (int j = 0; j < 21; j++) 
            a[j][i] += ((j + num[i] < 21) ? a[j + num[i]][i-1] : 0) + ((j - num[i] >= 0) ? a[j - num[i]][i-1] : 0);
    cout << a[dest][n-1-1] << endl;

    return 0;
}