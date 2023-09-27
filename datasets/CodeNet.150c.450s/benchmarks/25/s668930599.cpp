#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;
    vector<string> list;
    string s;
    while(getline(cin, s)){
        list.push_back(s);
    }
    for(int i = 0; i < 26; ++i){
        char c = 'a' + i;
        char C = 'A' + i;
        int sum = 0;
        for(int j = 0; j < list.size(); ++j){
            const string& s = list[j];
            for(int k = 0; k < s.size(); ++k){
                if(s[k] == c || s[k] == C) sum++;
            }
        }
        cout << c << " : " << sum << endl;
    }
    return 0;
}