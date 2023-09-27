#include <map>
#include <string>
#include <iostream>
using namespace std;
map<string,int> table;
int main()
{
    string word, frequent, longest;
    size_t N=0;
    while (cin >> word)
    {
        table[word]++;
        if(table[word]>N)
        {
            N=table[word];
            frequent=word;
}
            if(word.size()>longest.size())
                longest=word;
    }
        cout<<frequent<<" "<<longest<<endl;
    }
