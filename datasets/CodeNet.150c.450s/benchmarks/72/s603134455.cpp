#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int count=0;
    string ch;
    getline(cin,ch);
    while(count < ch.size()){
        if(ch[count] == ' '){
        cout << ' ';
        }else if(islower(ch[count])) {
            ch[count] = toupper(ch[count]);
            cout << ch[count];
        }
        else if(isupper(ch[count])){
            ch[count] = tolower(ch[count]);
            cout << ch[count];
        }
        else cout << ch[count];
        count ++;
    }
    cout << endl;
    return 0;
}