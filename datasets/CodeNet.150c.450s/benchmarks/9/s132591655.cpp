#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string word;
    int m, h;
    while(true){
        cin >> word;
        if (word == "-")
            break;
        
        cin >> m;
        for (int i = 0; i < m; i++) 
        {
            cin >> h;
            word +=  word.substr(0, h);
            word.erase(0, h);
        }
        cout << word << endl;
    }
}
