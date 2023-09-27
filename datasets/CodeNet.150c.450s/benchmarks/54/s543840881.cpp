#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string w;
    cin >> w;
    transform(w.begin(),w.end(),w.begin(),::tolower);
    int n = 0;
    while(1)
    {
        string t;
        cin >> t;
        if(t == "END_OF_TEXT")
        {
            cout << n << endl;
            return 0;
        }
        transform(t.begin(),t.end(),t.begin(),::tolower);
        if(w == t)
        {
            n++;
        }
    }
}