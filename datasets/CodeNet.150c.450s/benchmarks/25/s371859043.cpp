#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
char easytolower(char in);

int main(){
    string b;
    int num[26] = {0};
    while(cin >> b){
        string a = b;
        transform(a.begin(),a.end(), b.begin(),::tolower);
        for(int i = 0; i < b.length(); ++i){
            num[int(b[i]) - int('a')]++;
        }
    }

    for(int i = 0; i < 26; ++i){
        cout << (char)('a' + i ) << " : " << num[i] << endl;
    }
    return 0;
}