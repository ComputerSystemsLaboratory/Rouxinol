#include <iostream>
#include <cctype>
#include <string>
using namespace std;

const int kCharNum = 26;

bool isAlphabet(char ch)
{
    return 0 <= ch-'A' && ch-'A' < kCharNum;
}

int main()
{
    char ch;
    int charCount[kCharNum] = {0};
    while (cin >> ch)
    {
        if (islower(ch))    ch = toupper(ch);
        if (isAlphabet(ch))
        {
            charCount[ch-'A']++;
        }
    }
    
    for (int i=0; i<kCharNum; ++i)
    {
        cout << static_cast<char>('a'+i) << " : " << charCount[i] << endl;
    }
    
    return 0;
}