#include<iostream>
using namespace std;

int main() 
{
    short int n;

    cin >> n;

    short int a[n];

    for( short int i = 0; i < n; i++ )      //入力
        cin >> a[i];

    for( short int i = n - 1; i > 0; i--)   //出力
        cout << a[i] << " ";
    
    cout << a[0] << endl;

    return 0;
}
