#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    cin >> str;

    for( int i = str.size() - 1; i >= 0; i-- )  //格納順と逆に出力
        cout << str[i];
    
    cout << endl;

    return 0;
}

