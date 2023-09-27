#include <iostream>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <map>

using namespace std;

int main(int argc, char const* argv[])
{
    int table_count=0;
    char key,value;

    while ( 1 ) 
    {
        /* ---  読み込み --- */
        cin >> table_count;
        if ( table_count == 0 ) { return 0; };
        //
        //cout << "table_count" << table_count << endl;

        map<char, char> map;
        for (int i = 0; i < table_count; i++) 
        {
            //cout << i << ": ";
            cin >> key; 
            cin >> value; 
            map[key] = value; 
            //
            //cout << key << " " << value << endl;
        }
        
        /* ---  出力 --- */
        int char_count;
        cin >> char_count;
        //scanf("%d\n", &char_count);
        //
        //cout << "char_count :" << char_count << endl;
        for (int i = 0; i < char_count; i++) 
        {
            //
            //cout << i << " :";
            char tmp_char;
            cin >> tmp_char;
            
            if ( map.find(tmp_char) == map.end() ) 
            {
                cout << tmp_char;
            } 
            else 
            {
                cout << map[tmp_char];
            }
        }
        cout << endl;
    }
    return 0;
}