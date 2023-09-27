#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string, int> table;
int main()
{
    string word, frequent="", longest="";
    int  N = 0;
    while (cin >> word)
    {
        if (table.find(word) == table.end())
            table[word] = 0;
        table[word]++;
        if (N < table[word])
        {
            N = table[word];
            frequent = word;
        }
        if (word.size()>longest.size())
            longest = word;
    }
    cout << frequent << " " << longest << endl;
    return 0;
}