#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    char ch;
    do{
        cin.get(ch);
        if(islower(ch)) cout<<(char)toupper(ch);
        else if(isupper(ch)) cout<<(char)tolower(ch);
        else cout<<ch;
    }while(ch!='\n');
    return 0;
}