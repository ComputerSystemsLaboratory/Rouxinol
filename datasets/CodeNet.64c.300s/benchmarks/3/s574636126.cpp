#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int*num = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)cout << num[0] << endl;
       else cout << num[n - 1 - i] << " ";

    }

    return 0;
}