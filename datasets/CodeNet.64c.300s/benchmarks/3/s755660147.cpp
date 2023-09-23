#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[100];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int j = n - 1; j >= 1;j--)
        cout << x[j]<<" ";
    cout << x[0]<<endl;
    return 0;
}