#include <cctype>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string S;
    
    int C[26];
    
    memset(C, 0, sizeof(C));
    
    while(getline(cin, S))
    {
        for(unsigned i = 0; i < S.size(); i++)
        {
            if(isalpha(S[i]))
            {
                if(S[i] < 91)
                {
                    C[S[i] - 65]++;
                }
                else
                {
                    C[S[i] - 97]++;
                }
            }
        }
    }
    
    for(int i = 0; i < 26; i++)
    {
        cout << (char)(i + 97) << " : " << C[i] << endl;
    }
    
    return 0;
}