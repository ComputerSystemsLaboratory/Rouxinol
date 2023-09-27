#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool possibility = false;
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    for(size_t i = 0; i < str1.length(); i++)
    {
        if(str1[i] == str2[0])
        {
           if(str1.length() - i >= str2.length())
           {
               if(str1.substr(i, str2.length()) == str2)
               {
                   possibility = true;
                   break;
               }
           }
           else
           {
               if(str1.substr(i) + str1.substr(0, str2.length() - str1.length() + i) == str2)
               {
                   possibility = true;
                   break;
               }
           }
        }
    }


    if(possibility){ cout << "Yes" << endl; }
    else           { cout << "No"  << endl; }

    return 0;
}