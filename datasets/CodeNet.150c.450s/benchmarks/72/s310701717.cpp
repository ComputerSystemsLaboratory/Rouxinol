#include<iostream>
using namespace std;
#include<string>

int main()
{
    string s;
    getline(cin, s);

    int i;

    for(i = 0; s[i]; i++){
        if((s[i] >= 'a') && (s[i] <= 'z')){
            cout << char(s[i] - 32);
        }else if((s[i] >= 'A') && (s[i] <= 'Z')){
            cout << char(s[i] + 32);
        }else{ cout << s[i];}
    }

    cout << endl;

    return 0;
}