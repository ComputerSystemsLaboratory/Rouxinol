#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;
void count(vector<int>& table, string str){
    for(int i = 0; i < str.size(); ++i){
        int lower = tolower((int)str[i]);
        if(islower(lower)){
            table[lower] += 1;
        }
    }
}
int main()
{
    vector<int> table(256, 0);
    string s;
    while(getline(cin, s)){
        count(table, s);
    }
    for(int i = 'a'; i <= 'z'; ++i){
        char c = i;
        int n = table[i];
        cout << c << " : " << n << endl;
    }
    return 0;
}