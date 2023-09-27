#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int main()
{
    string field;
    map<string, int> mp;
    string frequently_word;
    string max_num_word;
    int freq_count = 0;
    int max_letter_num = 0;

    while (cin >> field)
    {
        /* store the word which has the maximum number */
        if(field.size() > max_letter_num)
        {
            max_letter_num = field.size();
            max_num_word = field;
        }
        /* search the word from map */
        if(mp.count(field)) 
        {
            mp[field]++; 
        }
        else
        {
            mp[field] = 1;
        }
 
    }
    /* get the most frequently word */
    for(auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        if(itr->second > freq_count)
        {
            freq_count = itr->second;
            frequently_word = itr->first;
        }
    }
    cout << frequently_word << " " << max_num_word << endl;

    return 0;
}