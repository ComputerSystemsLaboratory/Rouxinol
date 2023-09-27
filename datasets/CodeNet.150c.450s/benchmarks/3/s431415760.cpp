#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str,str1,str2;
    int a=0, b=0, n;

    cin >> str;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> str1;
        cin >> a >> b;
        if(str1 == "print"){
            str2 = str.substr(a,b-a+1);
            cout << str2 << endl;
        }
        if(str1 == "reverse"){
            str2 = str.substr(a,b-a+1);
            for (int i = 0; i < str2.size(); ++i)
            {
                str[a+i] = str2[str2.size()-i-1];
            }
        }
        if(str1 == "replace"){
            cin >> str2;
            for (int i = 0; i < str2.size(); ++i)
            {
                str[a+i] = str2[i];
            }
        }
    }

    return 0;
}