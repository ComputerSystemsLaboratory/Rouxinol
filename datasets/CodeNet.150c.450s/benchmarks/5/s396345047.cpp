#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cout << array[n-1-i];
        if(i!=n-1) cout << " ";
    }
    cout << endl;
    return 0;
}