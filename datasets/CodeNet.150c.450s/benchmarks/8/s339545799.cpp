
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int win = 3;
    const int draw = 1;

    string str;
    cin >> str;
    int n = stoi(str);
    int taro = 0, hanako = 0;
    string str_taro, str_hanako;
    for(int i = 0; i < n; i++)
    {
        cin >> str_taro;
        cin >> str_hanako;
        if     (str_taro > str_hanako){ taro   += win; }
        else if(str_taro < str_hanako){ hanako += win; }
        else           { taro += draw; hanako += draw; }

    }

    cout << taro << " " << hanako << endl;
    return 0;
}