#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
    string str;
    cin >> str;
    if(str.size() > 20)
        exit(1);
    else
        {
            string strrev(str.rbegin(), str.rend());
            cout << strrev;
        }
    cout << endl;
}