#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char str[1201], c;
    int i;
    for (i = 0; i < 1200; i++)
    {
        c = getchar();
        if (c=='\n')
        {
            str[i] = c;
            break;
        }
        else if (islower(c))
            str[i] = std::toupper(c);
        else if (isupper(c))
            str[i] = std::tolower(c);
        else
        {
            str[i] = c;
        }
    }

    i = 0;
    while (str[i]!='\n')
    {

        
        cout<<str[i]<<std::flush;

        i++;
        
    }

    cout<<endl;
    
    return 0;
}
