#include<iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    string rev(str.rbegin(), str.rend());
    cout << rev << endl;
}