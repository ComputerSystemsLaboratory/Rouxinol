#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;
void count(vector<int>& table, string str){
    for(int i = 0; i < str.size(); ++i){
        int index = toupper((int)str[i]) - 'A';
        if(0 <= index && index <= 26){
            table[index] += 1;
        }
    }
}
int main()
{
    vector<int> table(26);
    string s;
    while(getline(cin, s)){
        count(table, s);
    }
    for(int i = 0; i < 26; ++i){
        char c = 'a' + i;
        int n = table[i];
        cout << c << " : " << n << endl;
    }
    return 0;
}