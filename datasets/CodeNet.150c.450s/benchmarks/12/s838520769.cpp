
#include<iostream>
using namespace std;

int main()
{
    int N, H[250];
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> H[i];
    int k = 0;
    while (k < N) {
        cout << "node " << k + 1 <<": key = " << H[k] << ", ";
        int l = (k + 1) / 2 - 1;
        if (k!=0)
            cout << "parent key = " << H[l]<<", ";
        l = (k + 1) * 2-1;
        if (l < N)
            cout << "left key = " << H[l]<<", ";
        l = (k + 1) * 2 ;
        if (l < N)
            cout << "right key = " << H[l] << ", ";
        cout << endl;
        k++;
    }
    return 0;
}