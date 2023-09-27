#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(void){
    vector<string> character;
    character.push_back("");
    character.push_back(".,!? ");
    character.push_back("abc");
    character.push_back("def");
    character.push_back("ghi");
    character.push_back("jkl");
    character.push_back("mno");
    character.push_back("pqrs");
    character.push_back("tuv");
    character.push_back("wxyz");

    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            int index;
            for(index = j; s[index] != '0'; index++);
            int leng = index - j - 1;
            if(s[j] != '0'){ cout << character[s[j] - '0'][leng % character[s[j] - '0'].length()]; }
            j = index;
        }
        cout << endl;
    }
    return 0;
}