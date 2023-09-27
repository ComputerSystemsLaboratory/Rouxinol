#include<bits/stdc++.h>
//#include<string.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    std::string str;
    char alph[26]={0};
    int x;

    while (std::getline(cin, str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (isalpha(str[i]))
            {
                if (isupper(str[i]))
                    str[i] = tolower(str[i]);
                x = str[i] - 'a';
                alph[x]++;
            }
        }
    }
        for (int i = 0; i < 26; i++)
        printf("%c : %d\n", 97+i, alph[i]);
    

    //cout<<str[0]<<":"<<str.size()<<endl;
    

    return 0;
}
