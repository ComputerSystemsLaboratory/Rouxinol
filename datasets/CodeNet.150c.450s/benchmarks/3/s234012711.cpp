#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    char text[1001];
    cin.get(text, 1001);
    int a, b, c;
    cin>>a;
    string operation;
    while(a--)
    {
        cin>>operation;
        if(operation == "print")
        {
            cin>>b>>c;
            cout.write(text + b, c - b + 1);
            cout<<endl;
        }
        else if(operation == "reverse")
        {
            cin>>b>>c;
            reverse(text + b, text + c + 1);
        }
        else
        {
            cin>>b>>c;
            for(int i = b; i <= c; i++)
                cin>>text[i];
        }
    }
    return 0;
}
